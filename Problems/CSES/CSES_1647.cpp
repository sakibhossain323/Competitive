// Problem: Static Range Minimum Queries (https://cses.fi/problemset/task/1647/)

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define nln "\n"
#define caseout(n) cout << "Case " << n << ": "


const ll MOD = 1e9+7;
const int MAX = 2e5+1;


ll spars[MAX][18];

void build(vector<ll>& a)
{
    int n = a.size();
    for(int i = 1; i <= n; i++) spars[i][0] = a[i-1];

    for(int p = 1; p <= 18; p++)
    {
        for(int i = 1; i+(1<<p) - 1 <= n; i++)
        {
            spars[i][p] = min(spars[i][p-1], spars[i+(1<<(p-1))][p-1]);
        } 
    }
}

ll query(int l, int r)
{
    int p = 31 - __builtin_clz(r-l+1);
    return min(spars[l][p], spars[r-(1<<p)+1][p]);
}


void solve(int tcase)
{
    ll  n;
    cin >> n;

    ll q;
    cin >> q;


    vector <ll> a(n);
    for(int i= 0; i < n; i++) cin >> a[i];


    build(a);
    while(q--)
    {
        ll l, r;
        cin >> l >> r;
        cout << query(l, r) << nln;
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