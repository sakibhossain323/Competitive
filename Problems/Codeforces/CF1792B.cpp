#include <bits/stdc++.h>
using namespace std;


using ll = long long;
#define caseout(n) cout << "Case " << n << ": "
#define nln "\n"

#define MOD 1000000007
#define MAX 1000001



void solve(int tcase)
{
    // int n;
    // cin >> n;
    
    // vector <int> a(n);
    // for(int i = 0; i < n; i++) cin >> a[i];
    int a1, a2, a3, a4;
    cin >> a1 >> a2 >> a3 >> a4;
    if(a1 == 0) cout << 1 << nln;
    else
    {
        int jokes = a1;
        int min23 = min(a2, a3);
        jokes+= 2*min23;
        a2-= min23;
        a3-= min23;

        int max23 = max(a2, a3);
        if(max23 > a1) jokes+= a1 + min(1, max23+a4);
        else
        {
            jokes+= max23;
            a1-= max23;
            jokes+= min(a4, a1+1);
        }
        cout << jokes << nln;
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

    int t;
    cin >> t;
    for(int tcase = 1; tcase <= t; tcase++) solve(tcase);

    //---------------------------------------------------
    
    

    return 0;
}