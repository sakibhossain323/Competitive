#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define MOD 1000000007
#define MAX 100001



void solve(int tcase)
{

    // int n;
    // cin >> n;

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

    // freopen("overcode.in", "r", stdin);
 
//----------------------------------------------------------------


    // int t;
    // cin >> t;
    // for(int tcase = 1; tcase <= t; tcase++) solve(tcase);
    

//----------------------------------------------------------------

    //
    int n;
    string s;
    cin >> n >> s;
    if(n%2) cout << 1 << endl << s << endl;
    else
    {
        int zero = 0, one = 0;
        for(int i = 0; i < n; i++)
        {
            if(s[i] == '0') zero++;
            else one++;
        }

        if(zero == one)
        {
            cout << 2 << endl;
            cout << s.substr(0, n-1) << " " << s[n-1] << endl;
        }
        else cout << 1 << endl << s << endl; 
    }
    
    return 0;
}