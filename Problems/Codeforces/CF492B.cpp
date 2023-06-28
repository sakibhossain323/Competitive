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
    int n, l;
    cin >> n >> l;
    vector <int> ltrn(n);
    bool first = false, last = false;
    for(int i = 0; i < n; i++)
    {
        cin >> ltrn[i];
        if(ltrn[i] == 0) first = true;
        if(ltrn[i] == l) last = true;
    }
    sort(ltrn.begin(), ltrn.end());
    
    int maxdif = 0;
    for(int i = 1; i < n; i++)
    {
        int curdif = abs(ltrn[i]-ltrn[i-1]);
        maxdif = max(maxdif, curdif);
    }
    double ans = (double) maxdif/2.0;
    if(!first) ans = max((double)ltrn[0], ans);
    if(!last) ans = max((double)l-ltrn[n-1], ans);

    cout << fixed << setprecision(10)<< ans << endl;

    
    return 0;
}