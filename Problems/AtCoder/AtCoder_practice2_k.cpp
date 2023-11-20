// Problem:  Range Affine Range Sum (https://atcoder.jp/contests/practice2/tasks/practice2_k)

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define caseout(n) cout << "Case " << n << ": "

const ll MOD = 998244353;
const ll INF = 1e18;
const int MAX = 5e5+5;


template<typename ST, typename LZ> 
class SegmentTree {
private:
    int n;
    ST *tree, identity;
    ST (*merge) (ST, ST);

    LZ *lazy, unmark;
    void (*mergeLazy)(int, int, LZ&, LZ);
    void (*applyLazy)(int, int, ST&, LZ);

    void  build(vector<ST> &arr, int lo, int hi, int cur=1)
    {
        if(lo == hi)
        {
            tree[cur] = arr[lo-1];
            return; 
        }
        int mid = (hi+lo)/2, left = 2*cur, right = 2*cur+1;
        build(arr, lo, mid, left);
        build(arr, mid+1, hi, right);
        tree[cur] = merge(tree[left], tree[right]);
    }

    void propagate(int lo, int hi, int cur)
    {
        applyLazy(lo, hi, tree[cur], lazy[cur]);
        if(lo < hi)
        {
            int mid = (lo+hi)/2, left = 2*cur, right = 2*cur+1;
            mergeLazy(lo, mid, lazy[left], lazy[cur]);
            mergeLazy(mid+1, hi, lazy[right], lazy[cur]);
        }
        lazy[cur] = unmark;
    }

    void update(int from, int upto, LZ delta, int lo, int hi, int cur=1)
    {
        if(lo>hi) return;
        
        propagate(lo, hi, cur);
        if(from > hi or upto < lo) return;
        if(from<= lo and upto >= hi)
        {
            mergeLazy(lo, hi, lazy[cur], delta);
            propagate(lo, hi, cur);
            return;
        }
        int mid = (lo+hi)/2, left = 2*cur, right = 2*cur+1;
        update(from, upto, delta, lo, mid, left);
        update(from, upto, delta, mid+1, hi, right);
        tree[cur] = merge(tree[left], tree[right]);
    }

    ST query(int from, int upto, int lo, int hi, int cur=1)
    {
        if(lo>hi) return identity;

        propagate(lo, hi, cur);
        if(from > hi or upto < lo) return identity;
        if(from<= lo and upto >= hi) return tree[cur];
        int mid = (lo+hi)/2, left = 2*cur, right = 2*cur+1;
        ST lseg = query(from, upto, lo, mid, left);
        ST rseg = query(from, upto, mid+1, hi, right);
        return merge(lseg, rseg);
    }

public:
    SegmentTree(
        vector<ST> arr, ST (*merge) (ST, ST), ST identity,
        void (*mergeLazy)(int, int, LZ&, LZ),
        void (*applyLazy)(int, int, ST&, LZ), LZ unmark
    ): 
    n(arr.size()), tree(new ST[n * 4]), identity(identity), merge(merge),
    lazy(new LZ[n * 4]), unmark(unmark), mergeLazy(mergeLazy), applyLazy(applyLazy)
    {
        build(arr, 1, n);
        fill(lazy, lazy+n*4, unmark);
    }

    void update(int from, int upto, LZ delta)
    {
        update(from, upto, delta, 1, n);
    }

    ST query(int from, int upto)
    {
        return query(from, upto, 1, n);
    }

    ~SegmentTree()
    {
        delete[] tree;
        delete[] lazy;
    }
};


ll add(ll l, ll r) { return (l+r)%MOD;}
void mergeUpdate(int lo, int hi, pair<ll, ll>  &cur, pair<ll,ll> pending)
{
    auto &[b1, c1] = cur;
    auto &[b2, c2] = pending;
    cur = {(b1*b2)%MOD, ((c1*b2)%MOD+c2)%MOD};
}
void applyUpdate(int lo, int hi, ll &cur, pair<ll,ll> pending) {
    auto &[b, c] = pending;
    cur = ((b*cur)%MOD + ((hi-lo+1)*c)%MOD)%MOD;
}

void solve(int tcase)
{
    ll n, q;
    cin >> n >> q;
    vector<ll> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    SegmentTree<ll, pair<ll, ll>> st(a, add, 0, mergeUpdate, applyUpdate, {1,0});
    while(q--)
    {
        ll typ, l, r;
        cin >> typ >> l >> r;
        l++;
        if(typ == 1)
        {
            cout << st.query(l, r) << '\n';
        }
        else
        {
            ll b, c; 
            cin >> b >> c;
            st.update(l, r, {b, c});
        }
    }
    

}


signed main()
{
    cin.tie(0)->sync_with_stdio(0);
    




    int t = 1;
    // cin >> t;
    for(int tcase = 1; tcase <= t; tcase++) solve(tcase);

    return 0;
}