// Problem: Dice Combinations (https://cses.fi/problemset/task/1633/)

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

    
    vector <ll> dp(n+1);
    dp[0] = 1;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= 6; j++)
        {
            if(i-j < 0) break;
            dp[i] = (dp[i] + dp[i-j])%MOD;
        }
    }

    cout << dp[n];

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