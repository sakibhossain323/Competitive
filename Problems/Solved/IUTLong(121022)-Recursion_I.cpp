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
    // vector <int> a(n);
    // for(int i = 0; i < n; i++) cin >> a[i];
    


    //printf("Case #%d: %d\n", tcase, n);
}

ll f(int n)
{
    if(n < 2) return 1;
    else return n * f(n-1);
}

int main ()
{
//----------------------------------------------------------------


    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif

 
//----------------------------------------------------------------


    // int t;
    // cin >> t;
    // for(int tcase = 1; tcase <= t; tcase++) solve(tcase);
    

//----------------------------------------------------------------

    //
    
    int n;
    while(cin >> n)
    {
        if(n < 0 && n%2) cout << "Overflow!" << endl;
        else if(n < 8) cout << "Underflow!" << endl;
        else if(n > 13) cout << "Overflow!" << endl;
        else cout << f(n) << endl;
    }


    return 0;
}