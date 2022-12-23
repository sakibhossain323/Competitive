#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define MOD 1000000007
#define MAX 300001


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
    int n, k;
    cin >> n >> k;
    //
    vector <int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    
    sort(a.begin(), a.end());

    if(k == 0 && a[0] == 1)
    {
        cout << -1 << endl;
        return 0;
    }
    else if(k == 0)
    {
        cout << 1 << endl;
        return 0;
    }

    int taking = 0;
    for(int i = 0; i < n ;i++)
    {
        if(++taking == k)
        {
            if(k!= n && a[i] == a[i+1]) cout << -1 << endl;
            else cout << a[i] << endl;
            break;
        }
    }

    return 0;
}