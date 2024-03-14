// Problem: Vacation (https://atcoder.jp/contests/dp/tasks/dp_c)
// Submission: https://atcoder.jp/contests/dp/submissions/51231862


#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define caseout(n) cout << "Case " << n << ": "

const ll MOD = 1e9+7;//998244353;
const ll INF = 1e18;
const int MAX = 2e5+5;


vector<vector<ll>> dp(MAX, vector<ll>(3, -1));

ll calc(vector<vector<ll>>&a, ll n, ll i)
{
    if(n==0) return a[0][i];
    if(dp[n][i]!=-1) return dp[n][i];

    ll pts = -INF;
    for(int j = 0; j < 3; j++)
    {
        if(j==i) continue;
        pts = max(pts, calc(a, n-1, j));
    }
    return dp[n][i] = pts+a[n][i];
}

void solve(int tcase)
{
    ll n; cin >> n;

    vector<vector<ll>> a(n, vector<ll>(3));    
    for(int i = 0; i < n; i++) cin>>a[i][0]>>a[i][1]>>a[i][2]; 

    ll ans = calc(a, n-1, 0);
    ans = max(ans, calc(a, n-1, 1));
    ans = max(ans, calc(a, n-1, 2));
    cout << ans;


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