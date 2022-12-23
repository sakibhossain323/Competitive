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
    
    ll n, m;
    cin >> n >> m;

    ll temp = n, k = 1;
    
    int two = 0, five = 0;
    while(temp%2 == 0) temp/= 2, two++;
    while(temp%5 == 0) temp/=5, five++;
    
    while(two != five)
    {
        if(two > five)
        {
            if(k*5 > m) break;
            five++, k*=5;
        }
        else 
        {
            if(k*2 > m) break;
            two++, k*=2;
        }
    }

    while(k*10 <= m) k*= 10;
    
    
    if(k == 1) cout << n * m << endl;
    else cout << n*k*(m/k) << endl;
    
    
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