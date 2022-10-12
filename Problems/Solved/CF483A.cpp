#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define MOD 1000000007
#define MAX 10001


void solve(int tcase)
{
    // int n;
    // cin >> n;

    //
    // vector <int> a(n);
    // for(int i = 0; i < n; i++) cin >> a[i];
    


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


    // int t;
    // cin >> t;
    // for(int tcase = 1; tcase <= t; tcase++) solve(tcase);
    

//----------------------------------------------------------------

    //
    ll l, r;
    cin >> l >> r;
    
    ll a, c;
    vector <pair<ll, ll>> p;
    for(a = l; a < r-1; a++)
    {
        for(c = a+2; c <= r; c++)
        {
            if(__gcd(a, c) != 1) p.push_back(make_pair(a, c));
        }
    }

    for(int i = 0; i < p.size(); i++)
    {
        a = p[i].first, c = p[i].second;
        for(ll b = a+1; b < c; b++)
        {
            if(__gcd(a, b) == 1 && __gcd(b, c) == 1)
            {
                cout << a << " " << b << " " << c << endl;
                return 0;
            }
        }
        
    }
    cout << -1 << endl;
    


    return 0;
}