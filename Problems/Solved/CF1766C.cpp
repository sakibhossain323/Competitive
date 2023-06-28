#include <bits/stdc++.h>
using namespace std;


using ll = long long;
#define caseout(n) cout << "Case " << n << ": "
#define nln "\n"

#define MOD 1000000007
#define MAX 100001



void solve(int tcase)
{
    int  n;
    cin >> n;


    // vector <int> a(n);
    // for(int i = 0; i < n; i++) cin >> a[i];

    vector <string> grid(2);
    cin >> grid[0] >> grid[1];

    int i = 0;
    while(i < n && grid[0][i] == grid[1][i]) i++;

    int duo = 0, pos = -1;
    for(; i < n; i++)
    {
        if(grid[0][i] == grid[1][i]) duo++;
        else
        {
            if(pos == -1)
            {
                if(grid[0][i] == 'B') pos = 0;
                else pos = 1;
                continue;
            }

            if(duo % 2)
            {
                if(pos && grid[0][i] == 'W')
                {
                    cout << "NO\n";
                    return;
                }
                else if(!pos && grid[1][i] == 'W')
                {
                    cout << "NO\n";
                    return;
                }
            }
            else
            {
                if(pos && grid[1][i] == 'W')
                {
                    cout << "NO\n";
                    return;
                }
                else if(!pos && grid[0][i] == 'W')
                {
                    cout << "NO\n";
                    return;
                }
            }
        }
    }

    cout << "YES\n";
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

    int t = 1;
    cin >> t;
    for(int tcase = 1; tcase <= t; tcase++) solve(tcase);

    return 0;
}