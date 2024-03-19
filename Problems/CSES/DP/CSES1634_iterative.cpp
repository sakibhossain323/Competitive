// Problem: Minimizing Coins (https://cses.fi/problemset/task/1634/)

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define caseout(n) cout << "Case " << n << ": "

const ll MOD = 1e9+7;//998244353;
const ll INF = 1e18;
const int MAX = 1e6+5;




void solve(int tcase)
{
    ll n, x; cin >> n >> x;
    vector<ll> c(n);
    for(auto &i: c) cin >> i;

    vector<ll> dp(x+1);
    for(int i = 1; i <= x; i++)
    {
        ll res = INF;
        for(auto j: c)
        {
            if(i-j<0) continue;
            res = min(res, 1+dp[i-j]);
        }
        dp[i] = res;
    }
    if(dp[x] >= INF) cout << -1;
    else cout << dp[x];

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