// Problem: Gathering Food (https://lightoj.com/problem/gathering-food)

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define caseout(n) cout << "Case " << n << ": "

const ll MOD = 1e9+7;//998244353;
const ll INF = 1e18;
const int MAX = 1e5+5;


int dir_row[] = {0,-1, 0, 1};
int dir_col[] = {1, 0,-1, 0};

int n;
vector<string>grid(11);
bool vis[11][11];
int dist[11][11];

bool valid(int r, int c)
{
    return r>=0 && r<n && c>=0 && c < n;
}

void bfs(int r, int c, char nxt)
{
    vis[r][c] = true;
    queue<pair<int, int>> q;
    q.push({r, c});

    while(!q.empty())
    {
        auto [r, c] = q.front();
        q.pop();
        if(grid[r][c] == nxt) 
        {
            grid[r][c] = '.';
            break;
        }

        for(int i = 0; i < 4; i++)
        {
            int nr = r + dir_row[i], nc = c + dir_col[i];
            if(valid(nr, nc) && !vis[nr][nc] && (grid[nr][nc] == '.' || grid[nr][nc] == nxt))
            {
                vis[nr][nc] = true;
                dist[nr][nc] = 1 + dist[r][c];

                q.push({nr, nc});
            }
        }
    }

}

void reset(int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            vis[i][j] = false;
            dist[i][j] = 0;
        }
    }
}

void solve(int tcase)
{
    cin >> n;
    for(int i = 0; i < n; i++) cin >> grid[i];

    vector<tuple<char, int, int>> alph;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(grid[i][j] >= 'A' and grid[i][j] <= 'Z')
            {
                alph.push_back({grid[i][j], i, j});
            }
        }
    }
    sort(alph.begin(), alph.end());

    reset(n);
    ll ans = 0;
    for(int i = 1; i < alph.size(); i++)
    {
        auto &[prv, pr, pc] = alph[i-1];
        auto &[cur, cr, cc] = alph[i];
        
        if(prv =='A') grid[pr][pc] = '.';
        bfs(pr, pc, cur);
        
        if(vis[cr][cc])
        {
            ans+=dist[cr][cc];
            reset(n);
        }
        else
        {
            caseout(tcase) << "Impossible\n";
            return;
        }
    }
    caseout(tcase) << ans;
    
    cout << '\n';
}



signed main()
{
    cin.tie(0)->sync_with_stdio(0);
    




    int t = 1;
    cin >> t;
    for(int tcase = 1; tcase <= t; tcase++) solve(tcase);

    return 0;
}