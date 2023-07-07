// Problem: Triplets Min (https://www.codechef.com/problems/TRIPLETMIN)
// Submission: https://www.codechef.com/viewsolution/99799705

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define nln "\n"
#define caseout(n) cout << "Case " << n << ": "


const ll MOD = 1e9+7;
const int MAX = 2e5+1;


ll nc2(ll n)
{
    return (n*(n-1))/2;
}


void solve(int tcase)
{
    ll  n;
    cin >> n;

    ll q;
    cin >> q;


    vector <ll> a(n);
    for(int i= 0; i < n; i++) cin >> a[i];

    sort(a.begin(), a.end());
    map<ll, ll> mp;
    ll p_rng = 0;
    for(int i = 0; i+3 <= n; i++)
    {
        ll rng = nc2(n-i-1);
        mp[p_rng+rng] = a[i];
        p_rng+= rng;
    }

    while(q--)
    {
        ll k;
        cin >> k;
        cout << (mp.lower_bound(k))->second << nln;
    }

    // cout << nln;
    
}


void local_io()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
}

signed main ()
{
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    //--------------------------------------------------
    
    local_io();

    //---------------------------------------------------
    
    

    //---------------------------------------------------

    int t = 1;
    cin >> t;
    for(int tcase = 1; tcase <= t; tcase++) solve(tcase);

    return 0;
}