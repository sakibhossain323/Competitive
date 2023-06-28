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
    
    // vector <int> a(n);
    // for(int i = 0; i < n; i++) cin >> a[i];

    

    caseout(tcase) << 1 << nln;  

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
    
    int n, m;
    cin >> n >> m;

    vector <int> a(m);
    for(int i = 0; i < m; i++) cin >> a[i];

    sort(a.begin(), a.end());
    if(m == 0)
    {
        cout << "YES\n";
        return 0;
    }
    else
    {
        if(a[0] == 1 or a[m-1] == n)
        {
            cout << "NO\n";
            return 0;
        }
        if(m >= 3)
        {
            for(int i = 1; i < m-1; i++)
            {
                if(a[i-1]+1 == a[i] && a[i] == a[i+1]-1)
                {
                    cout << "NO\n";
                    return 0;
                }
            }
        }
    }

    cout << "YES\n";

    return 0;
}