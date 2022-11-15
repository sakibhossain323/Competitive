#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define MOD 1000000007
#define MAX 10001

ll nc2(ll n)
{
    return n*(n-1)/2; 
}

void solve(int tcase)
{
    int n;
    cin >> n;

    //
    vector <int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    map<int, int> occur;
    for(int i = 0; i < n; i++)
    {
        int temp = a[i] - i;
        if(occur.count(temp)) occur[temp]++;
        else occur[temp] = 1;
    }

    ll npairs = 0;
    for(auto &ptr: occur) if(ptr.second >= 2) npairs+= nc2(ptr.second);
    cout << npairs << endl;
    

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