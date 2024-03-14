// Problem: Frog 1 (https://atcoder.jp/contests/dp/tasks/dp_a)
// Submission: https://atcoder.jp/contests/dp/submissions/51229500

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
    vector<ll> h(n);
    for(auto &i: h) cin >> i;

    vector<ll> dp(n);
    dp[1] = abs(h[1]-h[0]);
    for(int i = 2; i < n; i++)
    {
        ll jump1 = dp[i-1]+abs(h[i]-h[i-1]);
        ll jump2 = dp[i-2]+abs(h[i]-h[i-2]);
        dp[i] = min(jump1, jump2);
    }
    cout << dp[n-1];


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