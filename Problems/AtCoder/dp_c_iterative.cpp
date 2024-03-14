// Problem: Vacation (https://atcoder.jp/contests/dp/tasks/dp_c)
// Submission: https://atcoder.jp/contests/dp/submissions/51232042


#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define caseout(n) cout << "Case " << n << ": "

const ll MOD = 1e9+7;//998244353;
const ll INF = 1e18;
const int MAX = 2e5+5;




void solve(int tcase)
{
    ll n; cin >> n;

    vector<vector<ll>> a(n, vector<ll>(3));    
    for(int i = 0; i < n; i++) cin>>a[i][0]>>a[i][1]>>a[i][2]; 

    vector<vector<ll>> dp(n, vector<ll>(3));
    dp[0][0] = a[0][0], dp[0][1] = a[0][1], dp[0][2] = a[0][2];
    for(int i = 1; i < n; i++)
    {
        dp[i][0] = a[i][0]+ max(dp[i-1][1], dp[i-1][2]);
        dp[i][1] = a[i][1]+ max(dp[i-1][0], dp[i-1][2]);
        dp[i][2] = a[i][2]+ max(dp[i-1][0], dp[i-1][1]);
    }
    cout << max(dp[n-1][0], max(dp[n-1][1],dp[n-1][2]));


    cout << '\n';
}



signed main()
{
    cin.tie(0)->sync_with_stdio(0);


    


    int t = 1;
    // cin >> t;
    for(int tcase = 1; tcase <= t; tcase++) solve(tcase);

    return 0;
}