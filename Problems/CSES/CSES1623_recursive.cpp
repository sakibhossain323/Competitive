// Problem: Apple Division (https://cses.fi/problemset/task/1623)

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define caseout(n) cout << "Case " << n << ": "

const ll MOD = 1e9+7;//998244353;
const ll INF = 1e18;
const int MAX = 5e3+5;


ll calc(vector<ll>&a, ll i, ll g1, ll g2)
{
    if(i<0) return abs(g1-g2);
    ll res1 = calc(a,i-1,g1+a[i],g2);
    ll res2 = calc(a,i-1,g1,g2+a[i]);
    return min(res1, res2);
}

void solve(int tcase)
{
    ll n; cin >> n;
    vector<ll> a(n);
    for(auto &i: a) cin >> i;

    cout << calc(a, n-1, 0, 0);


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