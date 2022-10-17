#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define MOD 1000000007
#define MAX 100001

vector <int> adj[MAX];
bool visited[MAX];

void dfs(int u)
{
    visited[u] = true;
    for(int v : adj[u])
    {
        if(!visited[v]) dfs(v);
    }
}

void solve(int tcase)
{
    // int n;
    // cin >> n;

    //
    // vector <int> a(n);
    // for(int i = 0; i < n; i++) cin >> a[i];
    


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
        int a, b;
        cin >> a >> b;

        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    
    vector <int> newroad;

    for(int i = 1; i <= n; i++)
    {
        if(!visited[i])
        {
            dfs(i);
            newroad.push_back(i);
        }
        
    }

    int road = newroad.size();
    cout << road - 1 << endl;
    for(int i = 1; i < road; i++) cout << newroad[i-1] << " " << newroad[i] << endl; 


    return 0;
}