#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define MOD 1000000007
#define MAX 100001



void solve(int  tcase)
{

    int n, k;
    cin >> n >> k;

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
    
    int n;
    cin >> n;
    map <pair<int, int>, string> fig;
    for(int i = 0; i < n; i++)
    {
        int a, b;
        string nam;
        cin >> a >> b >> nam;

        fig[make_pair(a,b)] = nam;
    }

    int t;
    cin >> t;
    while(t--)
    {
        int a, b;
        cin >> a >> b;
        cout << fig[make_pair(a,b)] << endl;
    }
    
    return 0;
}