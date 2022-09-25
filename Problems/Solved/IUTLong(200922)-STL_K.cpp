#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define MOD 1000000007
#define MAX 100001



void solve(int tcase)
{

    int n, k;
    cin >> n >> k;

    //
    if(n == 1) cout << 0 << endl;
    else if(k == 1 || k == n) cout << 1 << endl;
    else cout << 2 << endl;
    
    
    //printf("Case #%d: %d\n", tcase, n);
}



int main ()
{
//----------------------------------------------------------------


    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif

    freopen("tabs.in", "r", stdin);
 
//----------------------------------------------------------------


    int t;
    cin >> t;
    for(int tcase = 1; tcase <= t; tcase++) solve(tcase);
    
    
    //

    
    return 0;
}