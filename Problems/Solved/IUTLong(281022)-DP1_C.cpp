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


vector <vector<int>> dp(MAX, vector <int> (3, -1));

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
    int n;
    cin >> n;
    vector <int> a(n), b(n), c(n);
    for(int i = 0; i < n; i++) cin >> a[i] >> b[i] >> c[i];

    dp[0][0] = a[0], dp[0][1] = b[0], dp[0][2] = c[0];
    for(int i = 1; i < n; i++)
    {
        dp[i][0] = a[i]+ max(dp[i-1][1], dp[i-1][2]);
        dp[i][1] = b[i]+ max(dp[i-1][0], dp[i-1][2]);
        dp[i][2] = c[i]+ max(dp[i-1][0], dp[i-1][1]);
    }
    cout << max(dp[n-1][0], max(dp[n-1][1], dp[n-1][2])) << endl;
    
    return 0;
}