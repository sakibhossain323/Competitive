// Problem: TWO SACKS OF HAPPINESS (https://www.codechef.com/problems/TSOH)
// Submission: https://www.codechef.com/viewsolution/1011028284

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

    
    ll sum = 0;
    vector<ll> left(n);
    for(int i = 0; i < n; i++)
    {
        sum = max(a[i], a[i]+sum);
        left[i] = sum;
    }

    sum = 0;
    vector <ll> rght(n);
    for(int i = n-1; i >= 0; i--)
    {
        sum = max(a[i], a[i]+sum);
        rght[i] = sum;
    }

    vector <ll> maxl(n);
    maxl[0] = left[0];
    for(int i = 1; i < n; i++) maxl[i] = max(maxl[i-1], left[i]);

    vector <ll> maxr(n);
    maxr[n-1] = rght[n-1];
    for(int i = n-2; i >= 0; i--) maxr[i] = max(maxr[i+1], rght[i]);

    ll ans = -1e18;
    for(int i = 1; i < n; i++) ans = max(ans, maxl[i-1]+maxr[i]);

    cout << ans; 

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