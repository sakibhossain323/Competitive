#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define MOD 1000000007
#define MAX 10001


void solve(int tcase)
{
    int n;
    cin >> n;

    //
    vector <int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    
    map <int, int> indx;
    for(int i = 0; i < n; i++)
    {
        auto ptr = indx.find(a[i]);
        if(ptr != indx.end())
        {
            if(i+1 > ptr->second) indx[a[i]] = i+1;
        }
        else indx[a[i]] = i+1;
    }

    int sum = -1;
    for(auto i: indx)
    {
        for(auto j: indx)
        {
            if(__gcd(i.first, j.first) == 1)
            {
                sum = max(sum, i.second+j.second);
            }
        }
    }
    cout << sum << endl;
    

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