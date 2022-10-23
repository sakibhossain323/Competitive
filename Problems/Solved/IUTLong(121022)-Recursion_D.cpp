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

int f(int n)
{
    if(n == 1) return 1;
    else if(n%2) return 1 + f(3*n+1);
    else return 1 + f(n/2);
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
    
    int l, r;
    while(cin >> l >> r)
    {
        
        int mx = 0;
        for(int i = min(l, r); i <= max(l, r); i++)
        {
            int cur = f(i);
            mx = max(cur, mx);
        }

        cout << l << " " << r << " " << mx << endl;
    }


    return 0;
}