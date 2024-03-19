// Problem: Minimizing Coins (https://cses.fi/problemset/task/1634/)

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define caseout(n) cout << "Case " << n << ": "

const ll MOD = 1e9+7;//998244353;
const ll INF = 1e18;
const int MAX = 1e6+5;


vector<ll> dp(MAX, -1);

ll calc(vector<ll> &coins, ll n)
{
    if(n<0) return INF;
    if(n==0) return 0;
    if(dp[n]!=-1) return dp[n];

    ll res = INF;
    for(auto i: coins)
    {
        res = min(res, 1+calc(coins, n-i));
    }
    return dp[n] = res;
}

void solve(int tcase)
{
    ll n, x; cin >> n >> x;
    vector<ll> c(n);
    for(auto &i: c) cin >> i;

    ll res = calc(c, x);
    if(res>= INF) res = -1;
    cout << res;


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