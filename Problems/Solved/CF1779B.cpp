#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define MOD 1000000007
#define MAX 10001


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
    int n;
    cin >> n;
    //
    // vector <int> a(n);
    // for(int i = 0; i < n; i++) cin >> a[i];
    
    if(n == 3) cout << "NO" << endl;
    else
    {
        cout << "YES" << endl;
        if(n%2)
        {
            int m = (n-1)/2;
            for(int i = 0; i < n; i++)
            {
                if(i%2) cout << -m << " ";
                else cout << m-1 << " \n"[i+1==n];
            }
        }
        else
        {
            for(int i = 0; i < n; i++)
            {
                if(i%2) cout << -1 << " \n"[i+1==n];
                else cout << 1 << " ";
            }
        }

    }

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


    int t;
    cin >> t;
    for(int tcase = 1; tcase <= t; tcase++) solve(tcase);
    

//----------------------------------------------------------------

    //
    
    
    
    return 0;
}