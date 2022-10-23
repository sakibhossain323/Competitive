#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define MOD 1000000007
#define MAX 100001


vector <int> adj[MAX];
bool visited[MAX], color[MAX];
bool biprt = true;

void dfs(int u, bool c)
{
    visited[u] = true;
    color[u] = c;
    
    for(int v: adj[u])
    {
        if(!visited[v]) dfs(v, !c);
        else if(color[u] == color[v]) biprt = false;
    }
}

void solve(int tcase)
{
    int n;
    cin >> n;
    //
    

    
    //printf("Case #%d: %d\n", tcase, n);
}



int main ()
{
//----------------------------------------------------------------


    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif

 
//----------------------------------------------------------------


    // int t;
    // cin >> t;
    // for(int tcase = 1; tcase <= t; tcase++) solve(tcase);
    

//----------------------------------------------------------------

    //
    int n, m;
    cin >> n >> m;
    for(int i = 0; i < m; i++)
    {
        int u, v; 
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    for(int i = 1; i <= n; i++)
    {
        if(!visited[i]) dfs(i, false);
    }

    if(biprt)
    {
        for(int i = 1; i <= n; i++)
        {
            if(color[i]) cout << "1 ";
            else cout << "2 ";
        }
        cout << endl;
    }
    else cout << "IMPOSSIBLE" << endl;


    return 0;
}