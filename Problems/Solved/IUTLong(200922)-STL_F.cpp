#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define MOD 1000000007
#define MAX 100001



void solve(int tcase)
{

    // int n;
    // cin >> n;

    //
    

    //printf("Case #%d: %d\n", tcase, n);
}



int main ()
{
//----------------------------------------------------------------


    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif

    // freopen("overcode.in", "r", stdin);
 
//----------------------------------------------------------------


    // int t;
    // cin >> t;
    // for(int tcase = 1; tcase <= t; tcase++) solve(tcase);
    
    
    //
    string x, y, z;
    cin >> x >> z;
    
    int len = x.length();
    for(int i = 0; i < len; i++)
    {
        if(x[i] < z[i])
        {
            cout << -1 << endl;
            return 0;
        }
    }

    for(int i = 0; i < len; i++)
    {
        if(x[i] > z[i]) y.push_back(z[i]);
        else y.push_back(x[i]);
    }

    cout << y << endl;

    
    return 0;
}