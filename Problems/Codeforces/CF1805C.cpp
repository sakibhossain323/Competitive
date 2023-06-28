#include <bits/stdc++.h>
using namespace std;


using ll = long long;
#define caseout(n) cout << "Case " << n << ": "
#define nln "\n"

#define MOD 1000000007
#define MAX 100001



void solve(int tcase)
{
    int  n;
    cin >> n;

    int m;
    cin >> m;

    // vector <int> a(n);
    // for(int i = 0; i < n; i++) cin >> a[i];

    vector <int> k(n);
    for(int i = 0; i < n; i++) cin >> k[i];
    vector <int> a(m), b(m), c(m), ans(m);
    for(int i = 0; i < m; i++) cin >> a[i] >> b[i] >> c[i];
    vector <bool> ifans(m);

    sort(k.begin(), k.end());
    for(int i = 0; i < m; i++)
    {
        double key = b[i] - 2*sqrt((ll)a[i]*c[i]);
        int indx = upper_bound(k.begin(), k.end(), key) - k.begin();
        for(int j = max(0, indx-2); j < min(indx+2, n); j++)
        {
            ll det = (ll) (b[i]-k[j]) * (b[i]-k[j]) - 4ll*a[i]*c[i];
            if(det < 0)
            {
                ifans[i] = true;
                ans[i] = k[j];
                break;
            }
        }
    }

    for(int i = 0; i < m; i++)
    {
        if(ifans[i]) cout << "YES\n" << ans[i] << nln;
        else cout << "NO\n";
    }

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

    int t = 1;
    cin >> t;
    for(int tcase = 1; tcase <= t; tcase++) solve(tcase);

    return 0;
}