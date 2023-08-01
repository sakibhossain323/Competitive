// Problem: Maximum Subarray Sum (https://cses.fi/problemset/task/1643/)

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define nln "\n"
#define caseout(n) cout << "Case " << n << ": "


const ll MOD = 1e9+7;
const int MAX = 2e5+1;





void solve(int tcase)
{
    ll  n;
    cin >> n;

    // ll k;
    // cin >> k;


    vector <ll> a(n);
    for(int i= 0; i < n; i++) cin >> a[i];

    
    ll sum = a[0], maxsum = a[0];
    for(int i = 1; i < n; i++)
    {
        sum = max(a[i], a[i]+sum);
        maxsum = max(sum, maxsum);
    }
    cout << maxsum;


    cout << nln;
    
}



signed main()
{
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    //---------------------------------------------------
    
    
    
    //---------------------------------------------------

    int t = 1;
    // cin >> t;
    for(int tcase = 1; tcase <= t; tcase++) solve(tcase);

    return 0;
}