#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define MOD 1000000007
#define MAX 100001

vector <int> adj[MAX];
bool visited[MAX];
bool cat[MAX];
int mxcat, rstrnt;

void dfs(int u, int n_cat)
{
    if(cat[u]) n_cat++;
    else n_cat = 0;

    if(n_cat > mxcat) return;

    visited[u] = true;
    if(adj[u].size() == 1 && u!= 1) rstrnt++;
    for(int v: adj[u])
    {
        if(!visited[v]) dfs(v, n_cat);
    }
}

void solve(int tcase)
{
    int n;
    cin >> n;

    //
    vector <int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];



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
    for(int i = 1; i <= n; i++) cin >> cat[i];
    for(int i = 0; i < n-1; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    mxcat = m;
    dfs(1, 0);
    cout << rstrnt << endl;

    return 0;
}