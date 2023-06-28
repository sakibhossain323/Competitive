#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define MOD 1000000007
#define MAX 10001


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


int main ()
{
    
    
    return 0;
}