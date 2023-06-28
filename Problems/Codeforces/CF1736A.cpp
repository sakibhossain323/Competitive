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
    vector <int> a(n), b(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cin >> b[i];

    int a_one = 0, b_one = 0, mispos = 0;
    for(int i = 0; i < n; i++)
    {
        if(a[i]) a_one++;
        if(b[i]) b_one++;

        if(a[i] != b[i]) mispos++;
    }

    int difone = abs(a_one- b_one);

    if(difone == 0 && mispos == 0) cout << 0 << endl;
    else if(difone == 0) cout << 1 << endl;
    else if(mispos > difone) cout << difone+1 << endl;
    else cout << difone << endl;



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