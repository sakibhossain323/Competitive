#include <bits/stdc++.h>
using namespace std;


using ll = long long;
#define caseout(n) cout << "Case " << n << ": "
#define nln "\n"

#define MOD 1000000007
#define MAX 1000001



void solve(int tcase)
{
    int n;
    cin >> n;
    
    vector <int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    vector <ll> presum(n+1);
    for(int i = 1; i <= n; i++) presum[i] = presum[i-1] + a[i-1];

    ll maxgcd = 0;
    
    for(int i = 1; i < n; i++)
    {
        ll curgcd = __gcd(presum[i], presum[n]-presum[i]);
        maxgcd = max(maxgcd, curgcd);
    }

    cout << maxgcd << nln;
    
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

    int t;
    cin >> t;
    for(int tcase = 1; tcase <= t; tcase++) solve(tcase);

    //---------------------------------------------------
    
    

    return 0;
}