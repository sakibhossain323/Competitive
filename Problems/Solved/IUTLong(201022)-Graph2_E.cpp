#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define MOD 1000000007
#define MAX 100001


vector <int> adj[MAX];
bool visited[MAX];
int dist[MAX];

void bfs(int u)
{
    visited[u] = true;
    queue <int> q;
    q.push(u);

    while (!q.empty())
    {
        u = q.front();
        q.pop();
        for(int v: adj[u])
        {
            if(!visited[v])
            {
                q.push(v);
                visited[v] = true;
                dist[v] = 1 + dist[u];
            }
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
    int n;
    cin >> n;
    vector <int> boss;
    for(int i = 1; i <= n; i++)
    {
        int v; 
        cin >> v;
        if(v == -1) boss.push_back(i);
        else
        {
            adj[i].push_back(v);
            adj[v].push_back(i);
        }

        
    }

    for(int i: boss) bfs(i);
    int mingroup = 0;
    for(int i = 1; i <= n; i++) mingroup = max(dist[i], mingroup);
    cout << mingroup+1 << endl;
    

    return 0;
}