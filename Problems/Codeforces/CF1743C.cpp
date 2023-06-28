#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define MOD 1000000007
#define MAX 100001



void solve(int tcase)
{
    string s;
    int n;
    cin >> n >> s;
    //
    vector <int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    
    ll saved = 0;
    for(int i = 0; i < n; i++)
    {
        if(s[i] == '1') saved+= a[i];
        else
        {
            int minval = a[i];
            saved+= a[i];
            while(i+1 < n && s[i+1] == '1')
            {
                i++;
                saved+= a[i];
                minval = min(a[i], minval);
            }
            saved-= minval;
        }
    }
    cout << saved << endl;

    
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