// Problem: Frog 1 (https://atcoder.jp/contests/dp/tasks/dp_a)
// Submission: https://atcoder.jp/contests/dp/submissions/51228680

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define caseout(n) cout << "Case " << n << ": "

const ll MOD = 1e9+7;//998244353;
const ll INF = 1e18;
const int MAX = 2e5+5;

 
vector<ll> dp(MAX, -1);

ll getCost(vector<ll> &h, ll i)
{
    if(i == 0) return 0;
    if(i == 1) return abs(h[1]-h[0]);
    if(dp[i]!=-1) return dp[i];
    
    ll jump1 = getCost(h, i-1) + abs(h[i]-h[i-1]);
    ll jump2 = getCost(h, i-2) + abs(h[i]-h[i-2]);
    return dp[i] = min(jump1, jump2);
}

void solve(int tcase)
{
    ll n; cin >> n;
    vector<ll> h(n);
    for(auto &i: h) cin >> i;

    cout << getCost(h, n-1);


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