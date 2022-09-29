#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define MOD 1000000007
#define MAX 100001

ll nC2(ll n)
{
    if(n < 2) return 0;
    return (n*(n-1))/2;
}

void solve(int tcase)
{
    int n;
    cin >> n;

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

 
//----------------------------------------------------------------


    // int t;
    // cin >> t;
    // for(int tcase = 1; tcase <= t; tcase++) solve(tcase);
    

//----------------------------------------------------------------

    //
    ll n, m;
    cin >> n >> m;

    ll maxteam = nC2(n-(m-1));
    ll minteam;
    if(n%m == 0) minteam = m * nC2(n/m);
    else 
    {
        minteam = nC2(n/m)*(m- n%m) + nC2(n/m+1)*(n%m);
    }
    cout << minteam << " " << maxteam << endl;

    
    return 0;
}