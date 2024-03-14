// Problem: Frog 2 (https://atcoder.jp/contests/dp/tasks/dp_b)
// Submission: https://atcoder.jp/contests/dp/submissions/51231090

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define caseout(n) cout << "Case " << n << ": "

const ll MOD = 1e9+7;//998244353;
const ll INF = 1e18;
const int MAX = 2e5+5;

 
vector<ll> dp(MAX, -1);

ll getCost(vector<ll>&h, ll k, ll n)
{
    if(n == 0) return 0;
    if(dp[n]!=-1) return dp[n];

    ll cost = INF;
    for(int i = 1; i <= k; i++)
    {
        if(n-i<0) break;
        ll cur = abs(h[n]-h[n-i])+getCost(h, k, n-i);
        cost = min(cost, cur);
    }

    return dp[n] = cost;
}

void solve(int tcase)
{
    ll n, k; cin >> n >> k;
    vector<ll> h(n);
    for(auto &i: h) cin >> i;

    cout << getCost(h, k, n-1);


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