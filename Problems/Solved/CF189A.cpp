#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define MOD 1000000007
#define MAX 1000001


#define valid(nr,nc) nr>=1 && nr<MAX && nc>=1 && nc<MAX
int dr[] = {-1, 1, 0, 0};
int dc[] = { 0, 0,-1, 1};

// vector <int> adj[MAX];
// bool visited[MAX], road[MAX];
// int dist[MAX];


vector <int> dp(4001, -1), cut(3);

int piece(int n)
{
    if(n == 0) return 0;
    else if(n < 0) return INT_MIN;
    else if(dp[n] != -1) return dp[n];
    
    int mxcut = INT_MIN;
    for(int i = 0; i < 3; i++) mxcut = max(1+piece(n-cut[i]), mxcut);
    dp[n] = mxcut;

    return dp[n];
}

void solve(int tcase)
{
    int n;
    cin >> n;
    //
    vector<int> a(n);
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
    int n, a, b, c;
    cin >> n >> a >> b >> c;
    cut[0] = a, cut[1] = b, cut[2] = c;

    cout << piece(n) << endl;
    
    
    
    return 0;
}