// Problem: Matchsticks (https://www.codechef.com/problems/MSTICK)
// Submission: https://www.codechef.com/viewsolution/99477142

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define nln "\n"
#define caseout(n) cout << "Case " << n << ": "


const ll MOD = 1e9+7;
const int MAX = 1e5+1;


ll spMx[MAX][18], spMn[MAX][18];

void build(vector<ll>& a)
{
    int n = a.size();
    for(int i = 1; i <= n; i++) spMx[i][0] = a[i-1], spMn[i][0] = a[i-1];

    for(int p = 1; p <= 18; p++)
    {
        for(int i = 1; i+(1<<p) - 1 <= n; i++)
        {
            spMx[i][p] = max(spMx[i][p-1], spMx[i+(1<<(p-1))][p-1]);
            spMn[i][p] = min(spMn[i][p-1], spMn[i+(1<<(p-1))][p-1]);
        } 
    }
}

ll query_max(int l, int r)
{
    int p = 31 - __builtin_clz(r-l+1);
    return max(spMx[l][p], spMx[r-(1<<p)+1][p]);
}

ll query_min(int l, int r)
{
    int p = 31 - __builtin_clz(r-l+1);
    return min(spMn[l][p], spMn[r-(1<<p)+1][p]);
}


void solve(int tcase)
{
    ll  n;
    cin >> n;

    // ll m;
    // cin >> m;


    vector <ll> a(n);
    for(int i= 0; i < n; i++) cin >> a[i];


    build(a);
    ll q;
    cin >> q;
    while(q--)
    {
        ll l, r;
        cin >> l >> r;
        l++, r++;
        ll range_min = query_min(l, r);
        ll range_max = query_max(l, r);

        ll left_max = l!=1 ? query_max(1, l-1) : 0;
        ll rght_max = r!=n ? query_max(r+1, n) : 0;
        ll rest_max = max(left_max, rght_max);

        double ans = range_min + (range_max-range_min)/2.0;
        ans = max(ans, (double)range_min + rest_max);

        cout << fixed << setprecision(1) << ans << nln;
    }


    cout << nln;
    
}


void local_io()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
}

signed main ()
{
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    //--------------------------------------------------
    
    local_io();

    //---------------------------------------------------
    
    

    //---------------------------------------------------

    int t = 1;
    // cin >> t;
    for(int tcase = 1; tcase <= t; tcase++) solve(tcase);

    return 0;
}