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
    
    int n, t;
    cin >> n >> t;

    vector <int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    
    vector <ll> presum(n+1);
    for(int i = 1; i <= n; i++) presum[i] = presum[i-1] + a[i-1];

    
    int books = 0;
    for(int i = 0, j = 1; j <= n;)
    {
        if(presum[j] - presum[i] <= t)
        {
            books = max(books, j-i);
            j++;
        }
        else i++;
    }

    cout << ((books > n) ? n: books) << nln;

    return 0;
}