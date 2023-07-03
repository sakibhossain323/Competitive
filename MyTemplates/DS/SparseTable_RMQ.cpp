#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define nln "\n"
#define caseout(n) cout << "Case " << n << ": "


const ll MOD = 1e9+7;
const int MAX = 2e5+1;



ll spars[MAX][18];

void build(vector<ll>& a)
{
    int n = a.size();
    for(int i = 1; i <= n; i++) spars[i][0] = a[i-1];

    for(int p = 1; p <= 18; p++)
    {
        for(int i = 1; i+(1<<p) - 1 <= n; i++)
        {
            spars[i][p] = min(spars[i][p-1], spars[i+(1<<(p-1))][p-1]);
        } 
    }
}

ll query(int l, int r)
{
    int p = 31 - __builtin_clz(r-l+1);
    return min(spars[l][p], spars[r-(1<<p)+1][p]);
}



signed main ()
{
    

    return 0;
}