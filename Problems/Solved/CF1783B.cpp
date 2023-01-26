#include <bits/stdc++.h>
using namespace std;


using ll = long long;
#define caseout(n) cout << "Case " << n << ": "
#define nln "\n"

#define MOD 1000000007
#define MAX 10001



void solve(int tcase)
{
    int n;
    cin >> n;
    //
    // vector <int> a(n);
    // for(int i = 0; i < n; i++) cin >> a[i];
    
    int first = 1, last = n*n;
    vector <int> val;
    while(last >= first)
    {
        if(first == last) val.push_back(first++);
        else
        {
            val.push_back(first++);
            val.push_back(last--);
        }
    }

    vector <vector <int>> mat(n, vector <int> (n));
    int row = 0, col = 0;
    for(int i = 0; i < n*n; i++)
    {
        if(i!=0 && i % n == 0)
        {
            row++;
            if(row%2) col = n-1;
            else col = 0;
        }
        if(row%2)
        {
            mat[row][col] = val[i];
            col--;
        }
        else
        {
            mat[row][col] = val[i];
            col++;
        }
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << nln;
    }

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

    int t;
    cin >> t;
    for(int tcase = 1; tcase <= t; tcase++) solve(tcase);

    //---------------------------------------------------
    
    

    return 0;
}