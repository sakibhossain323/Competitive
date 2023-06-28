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
    vector <int> d(n), a(n);
    for(int i = 0; i < n; i++) cin >> d[i];

    a[0] = d[0];
    for(int i = 1; i < n; i++)
    {
        if(d[i]!= 0 && a[i-1] - d[i] >= 0)
        {
            cout << -1 << endl;
            return;
        }

        a[i] = a[i-1]+d[i];
    }

    for(int i = 0; i < n; i++) cout << a[i] << " ";
    cout << endl;


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