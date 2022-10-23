#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define MOD 1000000007
#define MAX 300001


#define valid(nr,nc) nr>=1 && nr<MAX && nc>=1 && nc<MAX
int dr[] = {-1, 1, 0, 0};
int dc[] = { 0, 0,-1, 1};

vector <pair<int,int>> adj[MAX];
bool visited[MAX], road[MAX];
int dist[MAX];
queue <int> q;

void bfs(int d)
{
    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        if(dist[u] == d) continue;
        for(auto p: adj[u])
        {
            int v = p.first, road_i = p.second;
            if(!visited[v])
            {
                visited[v] = true;
                dist[v] = 1 + dist[u];
                road[road_i] = true;
                q.push(v);
            }
        }

    }
    
}




void solve(int tcase)
{
    int n, m;
    cin >> n >> m;
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
    int n, k, d;
    cin >> n >> k >> d;
    for(int i = 0; i < k; i++)
    {
        int ps;
        cin >> ps;
        q.push(ps);
        visited[ps] = true;
        dist[ps] = 0;
    }

    for(int i = 1; i < n; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(make_pair(v, i));
        adj[v].push_back(make_pair(u, i));
    }
    
    bfs(d);
    vector <int> close;
    for(int i = 1; i < n; i++) if(!road[i]) close.push_back(i);
    cout << close.size() << endl;
    for(int i: close) cout << i << " ";
    cout << endl;

    return 0;
}