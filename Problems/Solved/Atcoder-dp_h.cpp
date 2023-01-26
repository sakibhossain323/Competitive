#include <bits/stdc++.h>
using namespace std;


using ll = long long;
#define caseout(n) cout << "Case " << n << ": "
#define nln "\n"

#define MOD 1000000007
#define MAX 1001 //1000001


int dp[MAX][MAX];

void solve(int tcase)
{
    int n;
    cin >> n;
    
    // vector <int> a(n);
    // for(int i = 0; i < n; i++) cin >> a[i];

    
    
    
}


void local_io()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
}

int main ()
{
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    //--------------------------------------------------
    
    local_io();

    //---------------------------------------------------

    // int t;
    // cin >> t;
    // for(int tcase = 1; tcase <= t; tcase++) solve(tcase);

    //---------------------------------------------------
    
    
    int h, w;
    cin >> h >> w;
    vector<string> grid(h);

    for(int i = 0; i < h; i++) cin >> grid[i];

    for(int i = 0; i < w; i++) 
    {
        if(grid[0][i] == '#') break;
        dp[0][i] = 1;
    }
    for(int i = 0; i < h; i++) 
    {
        if(grid[i][0] == '#') break;
        dp[i][0] = 1;
    }

    for(int i = 1; i < h; i++)
    {
        for(int j = 1; j < w; j++)
        {
            if(grid[i][j] == '.') dp[i][j] = (dp[i-1][j] + dp[i][j-1])%MOD;
        }
        
    }

    cout << dp[h-1][w-1] << nln;


    return 0;
}