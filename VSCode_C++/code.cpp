#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define nln "\n"
#define caseout(n) cout << "Case " << n << ": "


#define MOD 1000000007
#define MAX 100001





void solve(int tcase)
{
    ll  n;
    cin >> n;

    // ll m;
    // cin >> m;


    // vector <ll> a(n);
    // for(int i= 0; i < n; i++) cin >> a[i];


    caseout(tcase) << n*n;


    cout << nln;
    
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
    
    

    //---------------------------------------------------

    int t = 1;
    cin >> t;
    for(int tcase = 1; tcase <= t; tcase++) solve(tcase);

    return 0;
}