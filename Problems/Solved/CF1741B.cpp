#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define MOD 1000000007
#define MAX 10001


void solve(int tcase)
{
    int n;
    cin >> n;

    //
    if(n == 3) cout << -1 << endl;
    else if(n%2 == 0)
    {
        for(int i = n; i > 0; i--) cout << i << " ";
        cout << endl;
    }
    else
    {
        for(int i = n; i > n/2 + 1; i--) cout << i << " ";
        for(int i = 1; i <= n/2 + 1; i++) cout << i << " ";
        cout << endl;
    }


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


    int t;
    cin >> t;
    for(int tcase = 1; tcase <= t; tcase++) solve(tcase);
    

//----------------------------------------------------------------

    //
    
    


    return 0;
}