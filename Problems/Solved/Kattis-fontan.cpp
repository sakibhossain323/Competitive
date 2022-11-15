#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define MOD 1000000007
#define MAX 200001


// #define valid(nr,nc) nr>=1 && nr<MAX && nc>=1 && nc<MAX
// int dr[] = {-1, 1, 0, 0};
// int dc[] = { 0, 0,-1, 1};

// vector <int> adj[MAX];
// bool visited[MAX];
// int child[MAX];
//  int dist[MAX];

int n, m;
#define valid(nr,nc) nr>=0 && nr<n && nc>=0 && nc<m
bool visited[51][51];
void dfs(int r, int c, vector<string>&grid)
{
    visited[r][c] = true;
    int br = r+1, bc = c;
    if(valid(br,bc))
    {
        if(grid[br][bc] == '.')
        {
            grid[br][bc] = 'V';
            dfs(br, bc, grid);
        }
        else if(grid[br][bc] == '#')
        {
            int lr = r, lc = c-1;
            int rr = r, rc = c+1;
            if(valid(lr,lc))
            {
                if(grid[lr][lc] == '.')
                {
                    grid[lr][lc] = 'V';
                    dfs(lr, lc, grid);
                }
            }

            if(valid(rr,rc))
            {
                if(grid[rr][rc] == '.')
                {
                    grid[rr][rc] = 'V';
                    dfs(rr, rc, grid);
                }
            }
        }
    }
}


void solve(int tcase)
{
    int n;
    cin >> n;
    //
    vector <int> a(n), b(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cin >> b[i];
    
    

    
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
    cin >> n >> m;
    vector <string> grid(n);
    for(int i = 0; i < n; i++) cin >> grid[i];
    
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(grid[i][j] == 'V' && !visited[i][j]) dfs(i, j, grid);
        }
    }

    for(int i = 0; i < n; i++) cout << grid[i] << endl;

    return 0;
}