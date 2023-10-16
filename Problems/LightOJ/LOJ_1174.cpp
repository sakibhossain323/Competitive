// Problem: Commandos (https://lightoj.com/problem/commandos)

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define caseout(n) cout << "Case " << n << ": "

const ll MOD = 998244353;//1e9+7;
const ll INF = 1e18;
const int MAX = 1e5+1;


vector <int> adj[MAX];
bool visited[MAX];


void bfs(int src, vector<ll> &dist)
{
    visited[src] = true;
    queue <int> q;
    q.push(src);
    while(!q.empty())
    {
        int u = q.front();
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

void clear(int n, bool graph)
{
    for(int i = 0; i < n; i++)
    {
        if(graph) adj[i].clear();
        visited[i] = false;
    }
}

void solve(int tcase)
{
    ll n;
    cin >> n;

    ll r;
    cin >> r;

    // vector<ll> a(n);
    // for(int i = 0; i < n; i++) cin >> a[i];


    for(int i = 0; i < r; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    ll s, d;
    cin >> s >> d;

    vector<ll> dist(n), rdist(n);
    bfs(s, dist);
    clear(n, false);
    bfs(d, rdist);
    
    ll ans = 0;
    for(int i = 0; i < n; i++) ans = max(ans, dist[i]+rdist[i]);

    caseout(tcase) << ans;
    clear(n, true);

    cout << "\n";
}



signed main()
{
    cin.tie(0)->sync_with_stdio(0);
    




    int t = 1;
    cin >> t;
    for(int tcase = 1; tcase <= t; tcase++) solve(tcase);

    return 0;
}