#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define MOD 1000000007
#define MAX 100001


vector <int> adj[MAX];
bool visited[MAX];
int parent[MAX], start, stop;

void dfs(int u, int p)
{

    visited[u] = true;
    parent[u] = p;
    
    for(int v: adj[u])
    {
        
        if(start && stop) return;
        else if(!visited[v]) dfs(v, u);
        else if(v != parent[u])
        {
            start = v, stop = u;
            return;
        }
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

    vector <int> cycle;
    for(int i = 1; i <= n; i++)
    {
        start = 0, stop = 0;
        if(!visited[i]) dfs(i, 0);

        if(start && stop)
        {
            cycle.push_back(start);
            cycle.push_back(stop);

            while(stop!= start)
            {
                stop = parent[stop];
                cycle.push_back(stop);
                
            }
            break;
        }
    }

    int len = cycle.size();
    if(len) 
    {
        cout << len << endl;
        for(int i = 0; i < len; i++) cout << cycle[i] << " ";
        cout << endl;
    }
    else cout << "IMPOSSIBLE" <<endl;

    return 0;
}