#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define MOD 1000000007
#define MAX 100001

string grid[1000];
bool visited[1000][1000];

void dfs(int i, int j, int n, int m)
{
    
    visited[i][j] = true;
    if(i-1 >=0 && grid[i-1][j]=='.' && !visited[i-1][j]) dfs(i-1, j, n, m);
    if(i+1 < n && grid[i+1][j]=='.' && !visited[i+1][j]) dfs(i+1, j, n, m);
    if(j-1 >=0 && grid[i][j-1]=='.' && !visited[i][j-1]) dfs(i, j-1, n, m);
    if(j+1 < m && grid[i][j+1]=='.' && !visited[i][j+1]) dfs(i, j+1, n, m);
}

void solve(int tcase)
{
    // int n;
    // cin >> n;

    //
    // vector <int> a(n);
    // for(int i = 0; i < n; i++) cin >> a[i];
    


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
    int n, m;
    cin >> n >> m;
    for(int i = 0; i < n; i++) cin >> grid[i];
    
    int room = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(grid[i][j] == '.' && !visited[i][j])
            {
                dfs(i, j, n, m);
                room++;
            }
        }
    }

    cout << room << endl;


    return 0;
}