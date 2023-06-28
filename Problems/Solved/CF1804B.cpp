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

    int n, k, d, w;
    cin >> n >> k >> d >> w;
    
    vector <int> a(n); 
    for(int i = 0; i < n; i++) cin >> a[i];
    
    
    int packUsed = 1, dosRem = k, open = a[0]+w;

    for(int i = 0; i < n; i++)
    {
        if(dosRem == 0 || a[i] > open+d)
        {
            packUsed++;
            dosRem = k;
            open = a[i]+w;
        }
        
        dosRem--;
    }

    
    cout << packUsed << nln;

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