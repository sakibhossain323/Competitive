// Problem: Frequent values - UVA 11235 (https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2176)

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define nln "\n"
#define caseout(n) cout << "Case " << n << ": "


const ll MOD = 1e9+7;
const int MAX = 2e5+1;


ll tree[4*MAX];

void build(vector<ll>&a, int b, int e, int v=1)
{
    if(b == e)
    {
        tree[v] = a[b];
        return;
    }
    
    int mid = (b+e)/2;
    build(a, b, mid, 2*v);
    build(a, mid+1, e,2*v+1);
    tree[v] = max(tree[2*v], tree[2*v+1]);
}

ll query(int l, int r, int b, int e, int v=1)
{
    if(b > r || e < l) return 0;
    if(b >= l && e <= r) return tree[v];

    int mid = (b+e)/2;
    ll lseg = query(l, r, b, mid, 2*v);
    ll rseg = query(l, r, mid+1, e, 2*v+1);
    return max(lseg, rseg);
}



void solve(int tcase)
{
    while(true)
    {
        ll  n;
        cin >> n;
        if(n == 0) break;
        
        ll q;
        cin >> q;
        vector <ll> a(n+1);
        for(int i= 1; i <= n; i++) cin >> a[i];
        
        map <ll, ll> cnt, st, en;
        st[a[1]] = 1;
        for(int i= 1; i <= n; i++) 
        {
            cnt[a[i]]++;
            if(i == 1) continue;
            if(a[i-1]!= a[i])
            {
                en[a[i-1]] = i-1;
                st[a[i]] = i;
            }
        }
        en[a[n]] = n;

        vector<ll> freq(n+1);
        for(int i = 1; i <= n; i++) freq[i] = cnt[a[i]];

        build(freq, 1, n);

        while(q--)
        {
            ll l, r;
            cin >> l >> r;

            if(a[l] == a[r]) cout << r-l+1 << nln;
            else 
            {
                ll l_en = en[a[l]];
                ll r_st = st[a[r]];
                ll ans = max(l_en-l+1, r-r_st+1);
                if(l_en+1 <= r_st-1) ans = max(ans, query(l_en+1, r_st-1, 1, n));
                cout << ans << nln;
            }
        }
    }
    
    // cout << nln;
    
}


void local_io()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
}

signed main ()
{
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    //--------------------------------------------------
    
    local_io();

    //---------------------------------------------------
    
    

    //---------------------------------------------------

    int t = 1;
    // cin >> t;
    for(int tcase = 1; tcase <= t; tcase++) solve(tcase);

    return 0;
}