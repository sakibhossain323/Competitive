#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define MOD 1000000007
#define MAX 100001


// #define valid(nr,nc) nr>=1 && nr<MAX && nc>=1 && nc<MAX
// int dr[] = {-1, 1, 0, 0};
// int dc[] = { 0, 0,-1, 1};

// vector <int> adj[MAX];
// bool visited[MAX];
// int parent[MAX];
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




void solve(int tcase)
{
    // int n;
    // cin >> n;
    // //
    // vector <int> a(n);
    // for(int i = 0; i < n; i++) cin >> a[i];
    
    ll l, r, x, a, b;
    cin >> l >> r >> x >> a >> b;
    
    if(a == b) cout << 0 << endl;
    else if(abs(b-a)>= x) cout << 1 << endl;
    else
    {
        if(a < b)
        {
            if(a-x >= l || b+x <= r) cout << 2 << endl;
            else if(r-a >= x && b-l >= x) cout << 3 <<endl;
            else cout << -1 << endl;
        }
        else
        {
            if(a+x <= r || b-x >= l) cout << 2 << endl;
            else if(a-l >= x && r-b >= x) cout << 3 <<endl;
            else cout << -1 << endl;
        }
    }

    
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
    

    return 0;
}