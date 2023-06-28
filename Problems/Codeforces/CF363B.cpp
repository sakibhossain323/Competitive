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
    
    int n, k;
    cin >> n >> k;
    vector <int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    int ksum = 0;
    for(int i = n-1; i >= n-k; i--) ksum+=a[i];

    vector <int> heights(n-k+1);
    heights[n-k] = ksum;
    for(int i = n-k-1; i >= 0; i--)
    {
        heights[i] = a[i] + heights[i+1] - a[i+k];
    }

    int minh = heights[0], indx = 0;

    for(int i = 0; i <= n-k; i++)
    {
        if(minh > heights[i])
        {
            minh = heights[i];
            indx = i; 
        }
    }

    cout << indx+1 << nln;

    return 0;
}