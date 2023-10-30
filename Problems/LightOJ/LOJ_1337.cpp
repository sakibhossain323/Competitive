// Problem: The Crystal Maze (https://lightoj.com/problem/the-crystal-maze)

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define caseout(n) cout << "Case " << n << ": "

const ll MOD = 1e9+7;//998244353;
const ll INF = 1e18;
const int MAX = 1e5+5;


int dir_row[] = {0,-1, 0, 1};
int dir_col[] = {1, 0,-1, 0};

int n, m;
vector<string>grid(500);
int vis[500][500];

bool valid(int r, int c)
{
    return r>=0 && r<n && c>=0 && c < m;
}

int bfs(int r, int c, int flag)
{
    vis[r][c] = flag;
    queue<pair<int, int>> q;
    q.push({r, c});
    ll point = 0;

    while(!q.empty())
    {
        auto [r, c] = q.front();
        q.pop();
        if(grid[r][c] == 'C') point++;

        for(int i = 0; i < 4; i++)
        {
            int nr = r + dir_row[i], nc = c + dir_col[i];
            if(valid(nr, nc) && !vis[nr][nc] && grid[nr][nc] != '#')
            {
                vis[nr][nc] = flag;
                q.push({nr, nc});
                
            }
        }
    }

    return point;
}

void solve(int tcase)
{
    int q;
    cin >> n >> m >> q;

    for(int i = 0; i < n; i++) cin >> grid[i];

    vector<int> points(n*m);    
    int flag = 1;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(!vis[i][j] && grid[i][j] != '#')
            {
                int point = bfs(i, j, flag);
                points[flag] = point;
                flag++;
            }
        }
    }

    caseout(tcase) << '\n';
    while(q--)
    {
        ll x, y;
        cin >> x >> y;
        x--, y--;
        cout << points[vis[x][y]] << '\n';
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++) vis[i][j] = 0;
    }

}



signed main()
{
    cin.tie(0)->sync_with_stdio(0);
    




    int t = 1;
    cin >> t;
    for(int tcase = 1; tcase <= t; tcase++) solve(tcase);

    return 0;
}