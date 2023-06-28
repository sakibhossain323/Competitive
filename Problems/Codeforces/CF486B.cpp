#include <bits/stdc++.h>
using namespace std;


using ll = long long;
#define caseout(n) cout << "Case " << n << ": "
#define nln "\n"

#define MOD 1000000007
#define MAX 1000001




void solve(int tcase)
{
    int n;
    cin >> n;
    //
    vector <int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    
    
  
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
    
    int m, n;
    cin >> m >> n;
    vector <vector <int>> mat_b(m, vector<int> (n));
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++) cin >> mat_b[i][j];
    }

    
    vector <vector <int>> mat_a(m, vector<int> (n, 1));
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(mat_b[i][j] == 0)
            {
                for(int col = 0; col < n; col++) mat_a[i][col] = 0;
                for(int row = 0; row < m; row++) mat_a[row][j] = 0;
            }
        }
    }


    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            int cell = 0;
            for(int col = 0; col < n; col++) cell = (cell | mat_a[i][col]);
            for(int row = 0; row < m; row++) cell = (cell | mat_a[row][j]);

            if(cell != mat_b[i][j])
            {
                cout << "NO\n";
                return 0;
            }
        }
    }

    cout << "YES\n";
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++) cout << mat_a[i][j] << " ";
        cout << nln;
    }
    
    return 0;
}