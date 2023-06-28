#include <bits/stdc++.h>
using namespace std;
 
 
using ll = long long;
#define caseout(n) cout << "Case " << n << ": "
#define nln "\n"
 
#define MOD 1000000007
#define MAX 100001
 
 
using pll = pair<ll, ll>;
vector <pll> adj[MAX];
vector <ll> dist(MAX, INT64_MAX);
vector <ll> parent(MAX, -1);
 
void dijkstra(int src)
{
    dist[src] = 0;
    priority_queue <pll, vector<pll>, greater<pll>> pq;
    pq.push({0, src});
    while(!pq.empty())
    {
        ll curDist = pq.top().first, curNode = pq.top().second;
        pq.pop();

        if(curDist > dist[curNode]) continue;

        for(auto nxt: adj[curNode])
        {
            ll nxtNode = nxt.first, nxtDist = nxt.second+curDist;
            if(nxtDist < dist[nxtNode])
            {
                dist[nxtNode] = nxtDist;
                parent[nxtNode] = curNode;
                pq.push({nxtDist, nxtNode});
            }
        }
    }
}
 
 
void solve(int tcase)
{
    int n, m;
    cin >> n >> m;
    
    // vector <int> a(n);
    // for(int i = 0; i < n; i++) cin >> a[i];
 
    for(int i = 0; i < m; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        adj[a].push_back({b, c});
        adj[b].push_back({a, c});
    }
 
    dijkstra(1);

    vector <int> path;
    int cur = n;
    while(cur != 1)
    {
        if(cur == -1)
        {
            cout << -1 << nln;
            return;
        }
        path.push_back(cur);
        cur = parent[cur];
    }
    path.push_back(1);
 
    for(int i = (int)path.size()-1; i >= 0; i--) cout << path[i] << " ";
    cout << nln;
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
    
    local_io();
 
 
    //---------------------------------------------------
 
    int t = 1;
    // cin >> t;
    for(int tcase = 1; tcase <= t; tcase++) solve(tcase);
 
    return 0;
}