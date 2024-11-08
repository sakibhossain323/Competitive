// Problem: Range Update Queries (https://cses.fi/problemset/task/1651)

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
template <typename DT> 
using ordered_set = tree <DT, null_type, less<DT>, rb_tree_tag, tree_order_statistics_node_update>;
using ll = long long;


#define tcout(i) cout << "Case #" << i << ": "
const ll MOD = 1e9+7;
const ll INF = 1e18;
const int MAX = 2e6+5;


template<typename ST, typename LZ> 
class SegmentTree {
private:
    int n;
    ST *tree, identity;
    ST (*merge) (ST, ST);

    LZ *lazy, identityLazy;
    // marks [l, r] for lazy updates
    void (*markLazy)(int, int, LZ&, LZ);
    // applies pending updates for [l, r]
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
            markLazy(lo, mid, lazy[left], lazy[cur]);
            markLazy(mid+1, hi, lazy[right], lazy[cur]);
        }
        lazy[cur] = identityLazy;
    }

    void update(int from, int upto, LZ delta, int lo, int hi, int cur=1)
    {
        if(lo>hi) return;
        
        propagate(lo, hi, cur);
        if(from > hi or upto < lo) return;
        if(from<= lo and upto >= hi)
        {
            markLazy(lo, hi, lazy[cur], delta);
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
        void (*markLazy)(int, int, LZ&, LZ),
        void (*applyLazy)(int, int, ST&, LZ), LZ identityLazy
    ): 
    n(arr.size()), tree(new ST[n * 4]), identity(identity), merge(merge),
    lazy(new LZ[n * 4]), identityLazy(identityLazy), markLazy(markLazy), applyLazy(applyLazy)
    {
        build(arr, 1, n);
        fill(lazy, lazy+n*4, identityLazy);
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

void solve(int tc)
{   
    ll n, q; cin >> n >> q;
    vector<ll> a(n);
    for(auto &i: a) cin >> i;

    auto merge = [](ll a, ll b)-> ll {
        return a+b;
    };

    auto mark = [](int l, int r, ll&node, ll delta){
        node+=delta;
    };

    auto apply = [](int l, int r, ll&node, ll delta){
        node+= delta*(r-l+1);
    };

    SegmentTree<ll, ll> sgt(a, merge, 0, mark, apply, 0);

    while(q--)
    {
        ll typ; cin >> typ;
        if(typ == 1)
        {
            ll l, r, u; cin >> l >> r >> u;
            sgt.update(l, r, u);
        }
        else
        {
            ll k; cin >> k;
            cout << sgt.query(k, k) << '\n';
        }
    }
    

    // cout << '\n';
}


signed main()
{
    cin.tie(0)->sync_with_stdio(0);

    


    int t = 1;
    // cin >> t;
    for(int i = 1; i <= t; i++) solve(i);

    return 0;
}