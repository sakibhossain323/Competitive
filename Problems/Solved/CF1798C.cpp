#include <bits/stdc++.h>
using namespace std;


using ll = long long;
#define caseout(n) cout << "Case " << n << ": "
#define nln "\n"

#define MOD 1000000007
#define MAX 100001

ll __lcm(ll a, ll b) { return (a*b)/__gcd(a, b); }


void solve(int tcase)
{
    int  n;
    cin >> n;
    
    // vector <int> a(n); 
    // for(int i = 0; i < n; i++) cin >> a[i];
    
    vector <ll> a(n), b(n); 
    for(int i = 0; i < n; i++) cin >> a[i] >> b[i];

    ll tags = 1;
    ll gcd = 0, lcm = 1;
    for(int i = 0; i < n; i++)
    {
        gcd = __gcd(gcd, a[i]*b[i]);
        lcm = __lcm(lcm, b[i]);
        if(gcd % lcm != 0)
        {
            tags++;
            gcd = a[i]*b[i];
            lcm = b[i];
        }
    }

    cout << tags << nln;
    
}


void local_io()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
}

int main ()
{
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    //--------------------------------------------------
    
    local_io();


    //---------------------------------------------------

    int t = 1;
    cin >> t;
    for(int tcase = 1; tcase <= t; tcase++) solve(tcase);

    return 0;
}