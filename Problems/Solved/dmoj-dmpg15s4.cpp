// IUT ICPC Selection Contest 02 - Dhaka Regional 2022
#include <bits/stdc++.h>
using namespace std;


using ll = long long;
#define caseout(n) cout << "Case " << n << ": "
#define nln "\n"

#define MOD 1000000007
#define MAX  600 //1000001


vector <int> adj[MAX];
bool visited[MAX];


void dfs(int u)
{
    visited[u] = true;
    for(int v: adj[u])
    {
        if(!visited[v])
        {
            dfs(v);
        }
    }
}

void clearvisit()
{
    for(int i = 1; i < MAX; i++) visited[i] = false;
}

double dist(ll x1, ll y1, ll x2, ll y2)
{
    ll d2 = (x2-x1)*(x2-x1) + (y2-y1)*(y2-y1);
    return sqrt(d2);
}

void solve(int tcase)
{
    int n;
    cin >> n;
    
    vector <int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    
}


void local_io()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
}

int main ()
{
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    //--------------------------------------------------
    
    // local_io();

    //---------------------------------------------------

    // int t;
    // cin >> t;
    // for(int tcase = 1; tcase <= t; tcase++) solve(tcase);

    //---------------------------------------------------
    
    int b, q;
    cin >> b >> q;
    vector <int> x(b+1), y(b+1), r(b+1);
    for(int i = 1; i <= b; i++) cin >> x[i] >> y[i] >> r[i];

    for(int i = 1; i <= b; i++)
    {
        for(int j = 1; j <= b; j++)
        {
            if(i == j) continue;
            double d = dist(x[i], y[i], x[j], y[j]);
            if(d <= r[i]) adj[i].push_back(j);
        }
    }
    
    while(q--)
    {
        clearvisit();
        int a, b;
        cin >> a >> b;
        dfs(a);
        if(visited[b]) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}