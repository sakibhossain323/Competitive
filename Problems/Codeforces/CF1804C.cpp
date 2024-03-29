#include <bits/stdc++.h>
using namespace std;


using ll = long long;
#define caseout(n) cout << "Case " << n << ": "
#define nln "\n"

#define MOD 1000000007
#define MAX 100001




void solve(int tcase)
{
    // int n;
    // cin >> n;
    
    // vector <int> a(n); 
    // for(int i = 0; i < n; i++) cin >> a[i];
    
    int n, x, p;
    cin >> n >> x >> p;

    for(ll i = 1; i <= min(2*n, p); i++)
    {
        ll steps = (i*(i+1))/2;
        if((x+steps)%n == 0)
        {
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";

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