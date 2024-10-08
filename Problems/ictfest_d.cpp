#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
template <typename DT> 
using ordered_set = tree <DT, null_type, less<DT>, rb_tree_tag,tree_order_statistics_node_update>;
using ll = long long;


#define tcout(i) cout << "Case " << i << ": "
const ll MOD = 1e9+7;
const ll INF = 1e18;
const int MAX = 1e5+5;



ll dp[5005][5005][2];

ll calc(vector<ll>&v, ll l, ll r, ll skp)
{
    if(l==r) return max(v[l], 0ll);
    if(r<l) return -INF;
    if(dp[l][r][skp]!=-1) return dp[l][r][skp];

    if(skp)
    {
        dp[l][r][skp]= max({
            calc(v, l+1, r, 1) + v[l],
            calc(v, l, r-1, 1) + v[r],
            calc(v, l+2, r, 1) + v[l]*v[l+1],
            calc(v, l, r-2, 1) + v[r]*v[r-1],
            calc(v, l+1, r-1, 1) + v[l]*v[r]
        });
    }
    else
    {
        dp[l][r][skp]= max({
            calc(v, l+1, r, 0) + max(0ll, v[l]),
            calc(v, l, r-1, 0) + max(0ll, v[r]),
            calc(v, l+2, r, 0) + v[l]*v[l+1],
            calc(v, l, r-2, 0) + v[r]*v[r-1],
            calc(v, l+1, r-1, 1) + v[l]*v[r]
        });
    }

    return dp[l][r][skp];
}


void solve(int tc)
{   
    ll n; cin >> n;
    vector<ll> v(n+4);
    for(int i = 2; i < n+2; i++) cin >> v[i];


    memset(dp, -1, sizeof dp);
    cout << calc(v, 2, n+1, 0);

    
    cout << '\n';
}


signed main()
{
    cin.tie(0)->sync_with_stdio(0);





    int t = 1;
    // cin >> t;
    for(int i = 1; i <= t; i++) solve(i);

    return 0;
}