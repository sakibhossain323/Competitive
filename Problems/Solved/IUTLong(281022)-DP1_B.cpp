#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define MOD 1000000007
#define MAX 100001


#define valid(nr,nc) nr>=1 && nr<MAX && nc>=1 && nc<MAX
int dr[] = {-1, 1, 0, 0};
int dc[] = { 0, 0,-1, 1};

// vector <int> adj[MAX];
// bool visited[MAX], road[MAX];
// int dist[MAX];


vector <int> dp(MAX, -1), h(MAX);

ll cost(int n, int k)
{
    if(n == 1) return 0;
    else if(n < 1) return INT_MAX;
    else if(dp[n] != -1) return dp[n];

    ll mincost = INT_MAX;
    for(int i = 1; i <= k; i++)
    {
        int curCost = (n-i > 0) ? abs(h[n]-h[n-i]): 0;
        mincost = min(cost(n-i, k) + curCost, mincost);
    }
    dp[n] = mincost;
    return dp[n];
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
    int n, k;
    cin >> n >> k;
    h[0] = INT_MAX;
    for(int i = 1; i <= n; i++) cin >> h[i];
    cout << cost(n, k) << endl;

    
    return 0;
}