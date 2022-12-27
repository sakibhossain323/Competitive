#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define MOD 1000000007
#define MAX 1001


// #define valid(nr,nc) nr>=1 && nr<MAX && nc>=1 && nc<MAX
// int dr[] = {-1, 1, 0, 0};
// int dc[] = { 0, 0,-1, 1};

vector <int> adj[MAX];
bool visited[MAX];
// int parent[MAX];
// int dist[MAX];


void dfs(int u)
{
    visited[u] = true;
    for(int v: adj[u])
    {
        if(!visited[v])
        {
            dfs(v);
        }
    }
}



void solve(int tcase)
{
    // int n;
    // cin >> n;
    // //
    // vector <int> a(n);
    // for(int i = 0; i < n; i++) cin >> a[i];
    
    int n, k;
    cin >> n >> k;
    
    vector <ll> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    
    
    
    //printf("Case #%d: %d\n", tcase, n);
}



int main ()
{
//----------------------------------------------------------------


    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

 
//----------------------------------------------------------------


    // int t;
    // cin >> t;
    // for(int tcase = 1; tcase <= t; tcase++) solve(tcase);
    

//----------------------------------------------------------------

    //
    int n, s;
    cin >> n >> s;
    vector <int> a(n+1), b(n+1); 
    for(int i = 1; i <= n; i++) cin >> a[i];
    for(int i = 1; i <= n; i++) cin >> b[i];

    int u = -1, v = -1;
    for(int i = 1; i <= n; i++)
    {
        if(u==-1 && a[i]) u = i;

        if(u!=-1 && u!=i && a[i])
        {
            v = i;
            adj[u].push_back(v);
            u = v;
        }
    }

    u = -1, v = -1;
    for(int i = n; i > 0; i--)
    {
        if(u==-1 && b[i]) u = i;

        if(u!=-1 && u!=i && b[i])
        {
            v = i;
            adj[u].push_back(v);
            u = v;
        }
    }

    dfs(1);
    cout << ((visited[s]) ? "YES\n" : "NO\n");

    return 0;
}