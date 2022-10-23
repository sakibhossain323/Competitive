#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define MOD 1000000007
#define MAX 100001


vector <int> adj[MAX];
bool visited[MAX];
int dist[MAX];
int parent[MAX];

void bfs(int u)
{
    visited[u] = true;

    queue <int> q;
    q.push(u);
    while(!q.empty())
    {
        u = q.front();
        q.pop();
        for(int v: adj[u])
        {
            if(!visited[v])
            {
                visited[v] = true;
                parent[v] = u;
                dist[v] = 1+ dist[u];
                q.push(v);  
            }
        }
    }
}


void solve(int tcase)
{
    int n;
    cin >> n;
    //
    vector <int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    

    
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
    for(int  i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    bfs(1);
    if(visited[n])
    {
        cout << 1 + dist[n] << endl;

        vector <int> route;
        int par = n;
        while(par)
        {
            route.push_back(par);
            par = parent[par];
        }

        reverse(route.begin(), route.end());
        for(int i : route) cout << i << " ";
        cout << endl;
        
    }
    else cout << "IMPOSSIBLE" << endl;


    return 0;
}