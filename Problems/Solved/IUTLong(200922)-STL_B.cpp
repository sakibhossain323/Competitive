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
    vector <int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    for(int i = 0; i < n-1; i++)
    {
        for(int j = i+1; j < n; j++)
        {
            if(abs(a[j]-a[i])%2)
            {
                cout << "NO" << endl;
                return;
            }
        }
    }
    cout << "YES" << endl;


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


    int t;
    cin >> t;
    for(int tcase = 1; tcase <= t; tcase++) solve(tcase);
    

//----------------------------------------------------------------

    //
    
    
    return 0;
}