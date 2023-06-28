#include <bits/stdc++.h>
using namespace std;


using ll = long long;
#define caseout(n) cout << "Case " << n << ": "
#define nln "\n"

#define MOD 1000000007
#define MAX 100001




void solve(int tcase)
{
    int  n, k;
    cin >> n >> k;
    
    // vector <int> a(n); 
    // for(int i = 0; i < n; i++) cin >> a[i];
    
    vector <int> a; 
    int i = 1, rem = k;
    for(; i <= n; i++)
    {
        int subcnt = (i*(i+1))/2;
        if(subcnt > k) break;
        a.push_back(2);
        rem = k- subcnt;
    }

    if(rem > 0)
    {
        a.push_back(-2*(i-rem)+1);
        i++;
    }
    for(; i<= n; i++) a.push_back(-1000);
    for(int i: a) cout << i << " ";
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