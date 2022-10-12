#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define MOD 1000000007
#define MAX 10001



void solve(int tcase)
{
    // int n;
    // cin >> n;

    //
    string a, b;
    cin >> a >> b;

    unordered_map <char, int> vals;
    vals['S'] = -1;
    vals['M'] = 0;
    vals['L'] = 1;

    int alen = a.length(), blen = b.length();
    int aval = vals[a[alen-1]], bval = vals[b[blen-1]];
    aval*= alen, bval*= blen;

    if(aval == bval) cout << "=" << endl;
    else if(aval > bval) cout << ">" << endl;
    else cout << "<" << endl;


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