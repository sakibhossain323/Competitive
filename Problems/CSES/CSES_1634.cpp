// Problem: Minimizing Coins (https://cses.fi/problemset/task/1634/)

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
 
    ll x;
    cin >> x;
 
 
    vector <ll> a(n);
    for(int i= 0; i < n; i++) cin >> a[i];
 
    
    vector <ll> dp(x+1, -1);
    dp[0] = 0;
    for(int i = 1; i <= x; i++)
    {
        ll coin = 1e18;
        for(int j: a)
        {
            if(i-j >= 0 && dp[i-j] != -1)
            {
                coin = min(coin, dp[i-j]+1);                
            }
        }
        if(coin != 1e18) dp[i] = coin;
    }
    cout << dp[x];
 
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