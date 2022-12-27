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
    // int n;
    // cin >> n;
    // //
    // vector <int> a(n);
    // for(int i = 0; i < n; i++) cin >> a[i];
    
    
    int n, k;
    cin >> n >> k;
    
    vector <ll> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    ll aimax = 10000000000000000LL; 
    
    ll ki = 1;
    while( ki*k <= aimax) ki*=k;

    
    while(ki!= 0)
    {
        int count = 0;
        for(int i = 0; i < n; i++)
        {
            if(a[i] >= ki)
            {
                count++;
                a[i]-= ki;
            }
        }
        ki/= k;
        if(count > 1)
        {
            cout << "NO" << endl;
            return;
        }
    }
    for(int i: a)
    {
        if(i!= 0)
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
    
    
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