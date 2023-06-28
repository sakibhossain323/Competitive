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
    int n;
    cin >> n;
    // //
    vector <int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    
    int one = 0, two = 0;
    for(int i = 0; i < n; i++) ((a[i]%2)? one++ : two++);

    if((!one || one % 2 == 0) && (!two || two % 2 == 0)) cout << "YES" << endl;
    else if(!one && two%2)cout << "NO" << endl;
    else if(one%2 == 0 && two%2 && (one+two*2)%2 == 0) cout << "YES" << endl;
    else cout << "NO" << endl;
    
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