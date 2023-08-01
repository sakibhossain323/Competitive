// Problem: Finding Hardest Sum Value (https://www.codechef.com/problems/KOL15B)
// Submission: https://www.codechef.com/viewsolution/1011030082

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define nln "\n"
#define caseout(n) cout << "Case " << n << ": "


const ll MOD = 1e9+7;
const int MAX = 2e5+1;





void solve(int tcase)
{
    ll  n;
    cin >> n;

    ll m;
    cin >> m;


    // vector <ll> a(n);
    // for(int i= 0; i < n; i++) cin >> a[i];

    vector<vector<ll>> grid(n, vector<ll>(m));
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++) cin >> grid[i][j];
    }

    vector<vector<ll>> l2r(n, vector<ll>(m));
    for(int i = 0; i < n; i++)
    {
        ll sum = 0;
        for(int j = 0; j < m; j++)
        {
            sum = min(grid[i][j], sum+grid[i][j]);
            l2r[i][j] = sum;
        }
    }

    vector<vector<ll>> r2l(n, vector<ll>(m));
    for(int i = 0; i < n; i++)
    {
        ll sum = 0;
        for(int j = m-1; j >= 0; j--)
        {
            sum = min(grid[i][j], sum+grid[i][j]);
            r2l[i][j] = sum;
        }
    }
    
    vector<vector<ll>> u2d(n, vector<ll>(m));
    for(int j = 0; j < m; j++)
    {
        ll sum = 0;
        for(int i = 0; i < n; i++)
        {
            sum = min(grid[i][j], sum+grid[i][j]);
            u2d[i][j] = sum;
        }
    }

    vector<vector<ll>> d2u(n, vector<ll>(m));
    for(int j = 0; j < m; j++)
    {
        ll sum = 0;
        for(int i = n-1; i >= 0; i--)
        {
            sum = min(grid[i][j], sum+grid[i][j]);
            d2u[i][j] = sum;
        }
    }
    

    ll ans = 1e18;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            ll tmp = l2r[i][j] + r2l[i][j] + u2d[i][j]+ d2u[i][j] - 3*grid[i][j];
            ans = min(ans, tmp);
        }
    }
    cout << ans;


    cout << nln;
    
}



signed main()
{
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    //---------------------------------------------------
    
    
    
    //---------------------------------------------------

    int t = 1;
    cin >> t;
    for(int tcase = 1; tcase <= t; tcase++) solve(tcase);

    return 0;
}