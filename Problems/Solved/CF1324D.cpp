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
    //
    // vector <int> a(n);
    // for(int i = 0; i < n; i++) cin >> a[i];

    
    
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

    // int t;
    // cin >> t;
    // for(int tcase = 1; tcase <= t; tcase++) solve(tcase);

    //---------------------------------------------------
    
    int n;
    cin >> n;
    vector <int> a(n), b(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cin >> b[i];

    vector <int> dif(n);
    for(int i = 0; i < n; i++) dif[i] = a[i] - b[i];
    sort(dif.begin(), dif.end());

    ll pair_count = 0;
    for(int i = n-1; i > 0; i--)
    {
        if(dif[i] > 0)
        {
            int indx = lower_bound(dif.begin(), dif.end(), -dif[i]+1) - dif.begin();
            pair_count+= i - indx;
        }

    }
    cout << pair_count << endl;

    return 0;
}