// Problem: Dice Combinations (https://cses.fi/problemset/task/1633/)

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define caseout(n) cout << "Case " << n << ": "

const ll MOD = 1e9+7;//998244353;
const ll INF = 1e18;
const int MAX = 1e6+5;


vector<ll> dp(MAX, -1);

ll calc(ll n)
{
    if(n < 0) return 0;
    if(n == 0) return 1;
    if(dp[n]!=-1) return dp[n];
    dp[n] = 0;
    for(int i = 1; i <= 6; i++)
    {
        (dp[n]+= calc(n-i))%= MOD;
    }

    return dp[n];
}

void solve(int tcase)
{
    ll n; cin >> n;
    cout << calc(n);

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