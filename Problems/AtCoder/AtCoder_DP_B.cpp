// Problem: Frog 2 (https://atcoder.jp/contests/dp/tasks/dp_b)
// Submission: https://atcoder.jp/contests/dp/submissions/43971132

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

    ll k;
    cin >> k;


    vector <ll> a(n);
    for(int i= 0; i < n; i++) cin >> a[i];

    
    vector <ll> dp(n);

    for(int i = 1; i < n; i++)
    {
        ll cost = 1e9;
        for(int j = 1; j <= k; j++)
        {
            if(i-j < 0) break;
            cost = min(cost, dp[i-j]+ abs(a[i]-a[i-j]));
        }
        dp[i] = cost; 
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