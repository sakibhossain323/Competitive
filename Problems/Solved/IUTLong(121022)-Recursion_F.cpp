#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define MOD 1000000007
#define MAX 100001


void solve(int tcase)
{
    int n;
    cin >> n;
 
    //
    // vector <int> a(n);
    // for(int i = 0; i < n; i++) cin >> a[i];
    


    //printf("Case #%d: %d\n", tcase, n);
}

int truck(int crate, int maxload)
{
    if(crate <= maxload) return 1;
    if(crate%2) return truck(crate/2 + 1, maxload) + truck(crate/2, maxload);
    else return 2*truck(crate/2, maxload);
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
    int crate, maxload;
    while(cin >> crate >> maxload)
    {
        cout << truck(crate, maxload) << endl;
    }


    return 0;
}