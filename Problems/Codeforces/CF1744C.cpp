#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define MOD 1000000007
#define MAX 100001



void solve(int tcase)
{
    char c;
    string s;
    int n;
    cin >> n >> c >> s;
    //
    // vector <int> a(n);
    // for(int i = 0; i < n; i++) cin >> a[i];
    vector <int> r, g, y;
    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] == 'r') r.push_back(i);
        else if(s[i] == 'g') g.push_back(i);
        else y.push_back(i);
    }

    if(c == 'g') cout << 0 << endl;
    else if(c == 'r')
    {
        int maxtime = 0;
        for(int i = 0; i < r.size(); i++)
        {
            auto ptr = upper_bound(g.begin(), g.end(), r[i]);

            int curtime;
            if(ptr == g.begin()) curtime = *ptr - r[i];
            else if(ptr == g.end()) curtime = n - r[i] + g.front();
            else curtime = *ptr-r[i];

            maxtime = max(maxtime, curtime);
        }

        cout << maxtime << endl;
    }
    else
    {
        int maxtime = 0;
        for(int i = 0; i < y.size(); i++)
        {
            auto ptr = upper_bound(g.begin(), g.end(), y[i]);

            int curtime;
            if(ptr == g.begin()) curtime = *ptr - y[i];
            else if(ptr == g.end()) curtime = n - y[i] + g.front();
            else curtime = *ptr-y[i];

            maxtime = max(maxtime, curtime);
        }

        cout << maxtime << endl;
    }
 

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