#include <bits/stdc++.h>
using namespace std;


using ll = long long;
#define caseout(n) cout << "Case " << n << ": "
#define nln "\n"

#define MOD 1000000007
#define MAX 1000001




void solve(int tcase)
{
    int n, k;
    cin >> n >> k;
    
    vector <int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    int dif = *max_element(a.begin(), a.end()) - *min_element(a.begin(), a.end());
    if(dif/(double)k > 1) cout << "NO\n";
    else
    {
        cout << "YES\n";
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < a[i]; j++) cout << j%k+1 << " ";
            cout << nln;
        }
    }
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
    // cin >> t;
    for(int tcase = 1; tcase <= t; tcase++) solve(tcase);

    return 0;
}