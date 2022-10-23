#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define MOD 1000000007
#define MAX 1001

#define valid(nr,nc) nr>=1 && nr<MAX && nc>=1 && nc< MAX
//vector <int> adj[MAX];
bool visited[MAX][MAX];
int dist[MAX][MAX];
int dr[] = {-2,-1, 1, 2,-2,-1, 1, 2};
int dc[] = {-1,-2,-2,-1, 1, 2, 2, 1};

void bfs(int r, int c)
{
    visited[r][c] = true;
    dist[r][c] = 0;
    queue <pair<int, int>> q;
    q.push(make_pair(r,c));

    while (!q.empty())
    {
        r = q.front().first, c = q.front().second;
        q.pop();

        for(int i = 0; i < 8; i++)
        {
            int nr = r+dr[i];
            int nc = c+dc[i];
            if(valid(nr,nc) && !visited[nr][nc])
            {
                q.push(make_pair(nr, nc));
                visited[nr][nc] = true;
                dist[nr][nc] = 1 + dist[r][c];
            }
        }

    }
    
}

void solve(int tcase)
{
    int n, m;
    cin >> n >> m;
    //

    cout << dist[n][m] << endl;
    
    
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

    bfs(1, 1);
    int t;
    cin >> t;
    for(int tcase = 1; tcase <= t; tcase++) solve(tcase);
    

//----------------------------------------------------------------

    //
    
    

    return 0;
}