#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define MOD 1000000007
#define MAX 2001


int n, m;
#define valid(nr,nc) nr>=1 && nr<=n && nc>=1 && nc<=m

bool visited[MAX][MAX];
int dist[MAX][MAX];
int dr[] = {-1, 1, 0, 0};
int dc[] = { 0, 0,-1, 1};

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

        for(int i = 0; i < 4; i++)
        {
            int nr = r+dr[i];
            int nc = c+dc[i];
            if(valid(nr,nc) && !visited[nr][nc])
            {
                q.push(make_pair(nr, nc));
                visited[nr][nc] = true;
                dist[nr][nc] = 1 + dist[r][c];
            }
            else if(valid(nr,nc) && visited[nr][nc])
            {
                if(dist[nr][nc] > dist[r][c]+1)
                {
                    q.push(make_pair(nr, nc));
                    visited[nr][nc] = true;
                    dist[nr][nc] = 1 + dist[r][c];
                }
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
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    // #endif

 
//----------------------------------------------------------------

    // int t;
    // cin >> t;
    // for(int tcase = 1; tcase <= t; tcase++) solve(tcase);
    

//----------------------------------------------------------------

    //
    int k;
    cin >> n >> m >> k;

    for(int i = 0; i < k; i++)
    {
        int r, c;
        cin >> r >> c;
        bfs(r, c);
    }
    
    int mxdist = 0, mx_r = 1, mx_c = 1;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= m; j++)
        {
            if(dist[i][j] > mxdist)
            {
                mxdist = dist[i][j];
                mx_r = i, mx_c = j;
            }
        }
    }
    cout << mx_r << " " << mx_c << endl;

    return 0;
}