// Problem: Apple Division (https://cses.fi/problemset/task/1623)

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define caseout(n) cout << "Case " << n << ": "

const ll MOD = 1e9+7;//998244353;
const ll INF = 1e18;
const int MAX = 5e3+5;




void solve(int tcase)
{
    ll n; cin >> n;
    vector<ll> a(n);
    for(auto &i: a) cin >> i;

    ll sum = accumulate(a.begin(), a.end(), 0ll);
    ll mask = 1ll<<n, ans = INF;

    for(ll i=1; i <= mask; i++)
    {
        ll taken = 0;
        for(int j = 0; j < n; j++)
        {
            if(i&(1ll<<j)) taken+=a[j];
        }
        ans = min(ans, abs(sum-2*taken));
    }
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