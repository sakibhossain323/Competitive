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
    int n, k;
    cin >> n >> k;
    // //
    vector <int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    
    vector <int> b(n);
    for(int i = 0; i < n; i++) cin >> b[i];

    vector <pair<int,int>> mnstr;
    for(int i = 0; i < n; i++) mnstr.emplace_back(a[i], b[i]);
    sort(mnstr.begin(), mnstr.end());
    vector <int> premin(n);
    premin[n-1] = mnstr[n-1].second;
    for(int i = n-2; i >= 0; i--) premin[i] = min(premin[i+1], mnstr[i].second);

    int curdmg = k, dmgsum = k, lft_i = 0;
    sort(a.begin(), a.end());
    
    while(true)
    {
        int hplow_i = upper_bound(a.begin()+lft_i, a.end(), dmgsum) - a.begin();
        if(hplow_i >= n)
        {
            cout << "YES" <<endl;
            return;
        }
        lft_i = hplow_i;
        curdmg-= premin[lft_i];
        if(curdmg <= 0)
        {
            cout << "NO" << endl;
            return;
        }
        dmgsum+= curdmg;
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