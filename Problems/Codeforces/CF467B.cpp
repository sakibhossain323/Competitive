#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define MOD 1000000007
#define MAX 100001



void solve(int  tcase)
{

    // int n;
    // cin >> n;

    //


    //printf("Case #%d: %d\n", tcase, n);
}



int main ()
{
//----------------------------------------------------------------


    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
 
//----------------------------------------------------------------


    // int t;
    // cin >> t;
    // for(int tcase = 1; tcase <= t; tcase++) solve(tcase);
    
    
    int n, m, k;
    cin >> n >> m >> k;
    vector <int> players(m);
    for(int i = 0; i < m; i++) cin >> players[i];
    int fedor;
    cin >> fedor;
 
    int frnd = 0;
    for(int i = 0; i < m; i++)
    {
        int mask = players[i] ^ fedor;
        int dif = 0;
        bool isfrnd = true;
        for(int j = 0; j < n; j++)
        {
            if(mask & 1) dif++;
 
            if(dif > k)
            {
                isfrnd = false;
                break;
            }
            mask >>= 1;
        }
 
        if(isfrnd) frnd++;
    }
 
    cout << frnd << endl;
    
    return 0;
}