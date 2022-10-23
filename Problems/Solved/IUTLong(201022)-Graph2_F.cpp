// ---------- CF893C (Using BFS)-------------

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define MOD 1000000007
#define MAX 100001


#define valid(nr,nc) nr>=1 && nr<MAX && nc>=1 && nc<MAX
int dr[] = {-1, 1, 0, 0};
int dc[] = { 0, 0,-1, 1};

vector <int> adj[MAX];
bool visited[MAX];
// int dist[MAX];


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
    int n, m;
    cin >> n >> m;
    vector<int> bribe(n+1);
    for(int i = 1; i <= n; i++) cin >> bribe[i];

    for(int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    
    vector <pair<int,int>> indx;
    for(int i = 1; i <= n; i++) indx.push_back(make_pair(bribe[i], i));
    sort(indx.begin(), indx.end());

    ll gold = 0;
    for(auto i: indx)
    {
        if(!visited[i.second])
        {
            bfs(i.second);
            gold+= i.first;
        }
    } 

    cout << gold << endl;


    return 0;
}