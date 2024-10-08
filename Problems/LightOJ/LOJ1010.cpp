// Problem: Knights on a Chessboard (https://lightoj.com/problem/knights-on-chessboard)

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define caseout(n) cout << "Case " << n << ": "

const ll MOD = 1e9+7;//998244353;
const ll INF = 1e18;
const int MAX = 5e3+5;




void solve(int tcase)
{
    ll n, m; cin >> n >> m;

    ll ans;
    if(n==1 or m==1) ans = max(n, m);
    else if(n==2 or m==2)
    {
        ans = (max(n, m)/4)*4 + 2*min(max(n,m)%4, 2ll);
    }
    else ans = (n*m+1)/2;

    caseout(tcase) << ans;
    

    cout << '\n';
}



signed main()
{
    cin.tie(0)->sync_with_stdio(0);


    


    int t = 1;
    cin >> t;
    for(int tcase = 1; tcase <= t; tcase++) solve(tcase);

    return 0;
}