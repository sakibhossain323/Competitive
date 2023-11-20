#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define caseout(n) cout << "Case " << n << ": "

const ll MOD = 1e9+7;//998244353;
const ll INF = 1e18;
const int MAX =1e5+5;


using pll = pair<ll, ll>;
vector<pll> adj[MAX];
vector<ll> dist(MAX, INF);
vector<ll> par(MAX, -1);
 
void dijkstra(int src)
{
    dist[src] = 0;
    priority_queue<pll, vector<pll>, greater<pll>> pq;
    pq.push({0, src});
 
    while(!pq.empty())
    {
        auto [d, u] = pq.top();
        pq.pop();
 
        if(d > dist[u]) continue;
 
        for(auto &[v, w]: adj[u])
        {
            if(dist[u]+w < dist[v])
            {
                dist[v] = dist[u]+w;
                par[v] = u; 
                pq.push({dist[v], v});
            }
        }
    }
}


int main ()
{
    
    
    return 0;
}