// Problem: Vacation (https://atcoder.jp/contests/dp/tasks/dp_c)
// Submission: https://atcoder.jp/contests/dp/submissions/43971283


#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define nln "\n"
#define caseout(n) cout << "Case " << n << ": "


const ll MOD = 1e9+7;
const int MAX = 2e5+1;





void solve(int tcase)
{
    ll  n;
    cin >> n;

    // ll k;
    // cin >> k;


    // vector <ll> a(n);
    // for(int i= 0; i < n; i++) cin >> a[i];

    vector <ll> a(n), b(n), c(n);
    for(int i = 0; i < n; i++) cin >> a[i] >> b[i] >> c[i];

    vector <vector<ll>> dp(n, vector <ll> (3));
    dp[0][0] = a[0], dp[0][1] = b[0], dp[0][2] = c[0];

    for(int i = 1 ; i < n; i++)
    {
        dp[i][0] = max(a[i]+dp[i-1][1], a[i]+dp[i-1][2]);
        dp[i][1] = max(b[i]+dp[i-1][0], b[i]+dp[i-1][2]);
        dp[i][2] = max(c[i]+dp[i-1][0], c[i]+dp[i-1][1]);
    }

    cout << max(dp[n-1][0], max(dp[n-1][1], dp[n-1][2]));


    cout << nln;
    
}



signed main()
{
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    //---------------------------------------------------
    
    
    
    //---------------------------------------------------

    int t = 1;
    // cin >> t;
    for(int tcase = 1; tcase <= t; tcase++) solve(tcase);

    return 0;
}