#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define MOD 1000000007
#define MAX 1001


// #define valid(nr,nc) nr>=1 && nr<MAX && nc>=1 && nc<MAX
// int dr[] = {-1, 1, 0, 0};
// int dc[] = { 0, 0,-1, 1};

// vector <int> adj[MAX];
// bool visited[MAX];
int parent[MAX];
// int dist[MAX];


// void dfs(int u)
// {
//     visited[u] = true;
//     for(int v: adj[u])
//     {
//         if(!visited[v])
//         {
//             dfs(v);
//         }
//     }
// }

void set_init()
{
    for(int i = 1; i < MAX; i++) parent[i] = i;
}

int set_find(int v)
{
    if(parent[v] == v) return v;
    return parent[v] = set_find(parent[v]);
}

void set_union(int u, int v)
{
    int a = set_find(u);
    int b = set_find(v);
    if(a!=b) parent[b] = a;
}

void solve(int tcase)
{
    // int n;
    // cin >> n;
    // //
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
    int n;
    cin >> n;
    set_init();
    vector <pair<int,int>> close;
    for(int i = 1; i < n; i++)
    {
        int u, v;
        cin >> u >> v;
        if(set_find(u) != set_find(v)) set_union(u, v);
        else close.emplace_back(u, v);
    }

    vector<int> root;
    for(int i = 1; i <= n; i++) if(parent[i] == i) root.push_back(i);

    cout << root.size() -1 << endl;
    for(int i = 1; i < root.size(); i++)
    {
        int u = close.back().first;
        int v = close.back().second;
        cout << u << " " << v << " " << root[0] << " " << root[i] << endl;
        close.pop_back();
    }

    return 0;
}