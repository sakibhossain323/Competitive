// Problem: Catapult that ball (https://www.spoj.com/problems/THRBL/)

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
            spars[i][p] = max(spars[i][p-1], spars[i+(1<<(p-1))][p-1]);
        } 
    }
}

ll query(int l, int r)
{
    int p = 31 - __builtin_clz(r-l+1);
    return max(spars[l][p], spars[r-(1<<p)+1][p]);
}


void solve(int tcase)
{
    ll  n;
    cin >> n;

    ll m;
    cin >> m;


    vector <ll> a(n);
    for(int i= 0; i < n; i++) cin >> a[i];


    build(a);
    ll cnt = 0;
    while(m--)
    {
        ll u, v;
        cin >> u >> v;
        if(u == v) cnt++;
        else if(u < v && query(u, v-1) <= spars[u][0]) cnt++;
        else if(v < u && query(v+1, u) <= spars[u][0]) cnt++;
    }
    cout << cnt;


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