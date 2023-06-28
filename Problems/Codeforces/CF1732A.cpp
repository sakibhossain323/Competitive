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
    vector <int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    vector <int> pregcd(n+1);
    pregcd[0] = a[0];
    for(int i = 1; i <= n; i++) pregcd[i] = __gcd(a[i-1], pregcd[i-1]);

    int cost;
    if(pregcd[n] == 1) cost = 0;
    else if(__gcd(__gcd(a[n-1], n), pregcd[n-1]) == 1) cost = 1;
    else
    {
        int scndlast = __gcd(a[n-2], n-1);
        int scndgcd = __gcd(scndlast, pregcd[n-2]);
        if(__gcd(scndgcd, a[n-1]) == 1) cost = 2;
        else cost = 3;
    }
    cout << cost << endl;


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