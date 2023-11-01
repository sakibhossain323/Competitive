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
string grid[MAX];
bool vis[MAX][MAX];

bool valid(int r, int c)
{
    return r>=0 && r<n && c>=0 && c < m;
}

void bfs(int r, int c)
{
    vis[r][c] = true;
    queue<pair<int, int>> q;
    q.push({r, c});

    while(!q.empty())
    {
        auto [r, c] = q.front();
        q.pop();

        for(int i = 0; i < 4; i++)
        {
            int nr = r + dir_row[i], nc = c + dir_col[i];
            if(valid(nr, nc) && !vis[nr][nc] && grid[nr][nc] != '#')
            {
                vis[nr][nc] = true;
                q.push({nr, nc});
            }
        }
    }

}


int main ()
{
    
    
    return 0;
}