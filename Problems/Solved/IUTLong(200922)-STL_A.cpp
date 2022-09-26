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
    

//----------------------------------------------------------------

    //
    int n;
    cin >> n;
    if(n%2) cout << -1 << endl;
    else
    {
        for(int i = 1; i <= n; i+=2) cout << i+1 << " " << i << " ";
        cout << endl;
    }
    
    
    return 0;
}