#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define MOD 1000000007
#define MAX 100001



void solve(int tcase)
{
    int n, m;
    cin >> n >> m;

    //
    if(n == 1 || m == 1) cout << n << " " << m << endl;
    else if(n <= 2 && m <= 2) cout << n << " " << m << endl;
    else if(n <= 3 && m <= 3) cout << "2 2" << endl;
    else cout << n << " " << m << endl;


    //printf("Case #%d: %d\n", tcase, n);
}



int main ()
{
//----------------------------------------------------------------


    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif

 
//----------------------------------------------------------------


    int t;
    cin >> t;
    for(int tcase = 1; tcase <= t; tcase++) solve(tcase);
    

//----------------------------------------------------------------

    //
    

    
    return 0;
}