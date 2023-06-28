#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define MOD 1000000007
#define MAX 100001

// vector <int> adj[MAX];
// bool visited[MAX];

// void dfs(int u)
// {

//     visited[u] = true;

//     for(int v: adj[u])
//     {
//         if(!visited[v]) dfs(v);
//     }
// }

void solve(int tcase)
{
    int n, q;
    cin >> n >> q;

    //
    vector <int> a(n), k(q);
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < q; i++) cin >> k[i];

    vector <ll> presum(n);
    vector <int> premx(n);
    presum[0] = a[0];
    for(int i = 1; i < n; i++) presum[i] = presum[i-1] + (ll)a[i];
    premx[0] = a[0];
    for(int i = 1; i < n; i++) premx[i] = max(premx[i-1], a[i]);
    

    
    for(int i = 0; i < q; i++)
    {
        int indx =  upper_bound(premx.begin(), premx.end(), k[i]) - premx.begin() - 1;
        if(indx < 0) cout << "0 ";
        else cout << presum[indx] << " ";
    }
    cout << endl;
    

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


    int t;
    cin >> t;
    for(int tcase = 1; tcase <= t; tcase++) solve(tcase);
    

//----------------------------------------------------------------

    //
    // int n, m;
    // cin >> n >> m;
    
    // for(int i = 0; i < m; i++)
    // {
    //     int u, v;
    //     cin >> u >> v;
    //     adj[u].push_back(v);
    //     adj[v].push_back(u);
    // }

    


    return 0;
}