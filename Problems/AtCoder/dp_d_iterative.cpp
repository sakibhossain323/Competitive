// Problem: Knapsack 1 (https://atcoder.jp/contests/dp/tasks/dp_d)
// Submission: https://atcoder.jp/contests/dp/submissions/53039133

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






void solve(int tc)
{   
    ll n, w; cin >> n >> w;
    vector<ll> wt(n+1), v(n+1);
    for(int i = 1; i <= n; i++) cin >> wt[i] >> v[i];

    vector<vector<ll>> dp(n+1, vector<ll>(w+1));
    
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= w; j++)
        {
            dp[i][j] = dp[i-1][j];
            if(j-wt[i]<0) continue;
            dp[i][j]= max(dp[i-1][j-wt[i]] + v[i], 
                            dp[i][j]);
        }
    }
    cout << dp[n][w];

    
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