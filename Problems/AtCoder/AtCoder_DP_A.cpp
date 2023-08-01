// Problem: Frog 1 (https://atcoder.jp/contests/dp/tasks/dp_a)
// Submission: https://atcoder.jp/contests/dp/submissions/43969940

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

    // ll m;
    // cin >> m;


    vector <ll> a(n);
    for(int i= 0; i < n; i++) cin >> a[i];

    
    vector <ll> dp(n);
    dp[1] = abs(a[1]-a[0]);

    for(int i = 2; i < n; i++)
    {
        dp[i] = min(dp[i-1] + abs(a[i]-a[i-1]), dp[i-2] + abs(a[i]-a[i-2]));
    }
    cout << dp[n-1];


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