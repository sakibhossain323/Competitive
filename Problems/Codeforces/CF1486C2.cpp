// Problem: Guessing the Greatest(https://codeforces.com/problemset/problem/1486/C2)
// Submission: https://codeforces.com/contest/1486/submission/216638487

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define nln "\n"
#define caseout(n) cout << "Case " << n << ": "


const ll MOD = 1e9+7;
const int MAX = 2e5+1;


ll query(ll l, ll r)
{
    cout << "? " << l << " " << r << endl;
    ll rsp;
    cin >> rsp;
    return rsp;
}


void solve(int tcase)
{
    ll  n;
    cin >> n;

    // ll k;
    // cin >> k;


    // vector <ll> a(n);
    // for(int i= 0; i < n; i++) cin >> a[i];

    
    ll smax = query(1, n);
    if(smax != 1 and query(1, smax) == smax)
    {
        ll left = 1, right = smax;
        while(right - left > 1)
        {
            ll mid = (left+right)/2;
            if(query(mid, smax) == smax) left = mid;
            else right = mid;
        }
        cout << "! " << left << endl;
    }
    else
    {
        ll left = smax, right = n;
        while(right - left > 1)
        {
            ll mid = (left+right)/2;
            if(query(smax, mid) == smax) right = mid;
            else left = mid;
        }
        cout << "! " << right << endl;
    }


    // cout << nln;
    
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