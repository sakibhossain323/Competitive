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
    string p, h;
    cin >> p >> h;

    
    int plen = p.length(), hlen = h.length();
    if(hlen < plen)
    {
        cout << "NO" << endl;
        return;
    }

    sort(p.begin(), p.end());
    for(int i = 0; i <= hlen-plen; i++)
    {
        string temp = h.substr(i, plen);
        sort(temp.begin(), temp.end());

        if(temp == p)
        {
            cout << "YES" << endl;
            return;
        }
    }

    cout << "NO" << endl;

    //printf("Case #%d: %d\n", tcase, n);
}



int main ()
{
//----------------------------------------------------------------


    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    // freopen("scoreboard.in", "r", stdin);
 
//----------------------------------------------------------------


    int t;
    cin >> t;
    for(int tcase = 1; tcase <= t; tcase++) solve(tcase);
    
    
    //
    
    
    return 0;
}