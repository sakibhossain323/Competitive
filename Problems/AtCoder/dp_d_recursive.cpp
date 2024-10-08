// Problem: Knapsack 1 (https://atcoder.jp/contests/dp/tasks/dp_d)
// Submission: https://atcoder.jp/contests/dp/submissions/52779308

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



vector<vector<ll>> dp(105, vector<ll>(MAX, -1));
ll wt[105], v[105];

ll calc(ll n, ll w)
{
    if(w<0) return -INF;
    if(w==0 or n==0) return 0;
    if(dp[n][w]!=-1) return dp[n][w];

    return dp[n][w] = max(calc(n-1, w),
                        calc(n-1, w-wt[n])+v[n]);
}

void solve(int tc)
{
    ll n, w; cin >> n >> w;
    for(int i = 1; i <= n; i++) cin>>wt[i]>>v[i];

    cout << calc(n, w);


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