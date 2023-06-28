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

    vector <vector<int>> mat(m, vector <int> (n));

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++) cin >> mat[j][i];
    }

    ll ans = 0;
    for(int j = 0; j < m; j++)
    {
        sort(mat[j].begin(), mat[j].end());
        for(int i = 0; i < n; i++)
        {
            ans+= (ll)i*mat[j][i];
            ans-= (ll)(n-i-1)*mat[j][i];
        }
    }

    cout << ans << nln;

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