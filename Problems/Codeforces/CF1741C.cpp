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
    vector <int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    
    vector <int> presum(n);
    presum[0] = a[0];
    for(int i = 1; i < n; i++) presum[i] = a[i]+presum[i-1];

    int minthick = n;
    for(int i = 0; i < n; i++)
    {
        int segsum = 0, curlen = 0, maxlen = 0;
        for(int j = 0; j < n; j++)
        {
            segsum+= a[j], curlen++;
            if(segsum == presum[i])
            {
                maxlen = max(maxlen, curlen);
                segsum = 0, curlen = 0;
            }
            else if(segsum > presum[i]) break;
        }
        if(!segsum) minthick = min(minthick, maxlen);
    }
    cout << minthick << endl;

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