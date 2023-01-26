#include <bits/stdc++.h>
using namespace std;


using ll = long long;
#define caseout(n) cout << "Case " << n << ": "
#define nln "\n"

#define MOD 1000000007
#define MAX 100001


int nb, ns, nc, pb, ps, pc;
int reqBread, reqSaus, reqChees;
ll r;

bool makeable(ll burger)
{
    ll totalBread = burger*reqBread;
    ll totalSaus = burger*reqSaus;
    ll totalChees = burger*reqChees;

    ll buyBread = ((totalBread>nb) ? totalBread-nb : 0);
    ll buySaus = ((totalSaus>ns) ? totalSaus-ns : 0);
    ll buyChees = ((totalChees>nc) ? totalChees-nc : 0);

    ll price = buyBread*pb + buySaus*ps + buyChees*pc;

    if(price <= r) return true;
    else return false; 

}

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
    
    string s;
    cin >> s;
    cin >> nb >> ns >> nc >> pb >> ps >> pc;
    cin >> r;
    
    for(char c: s)
    {
        if(c == 'B') reqBread++;
        else if(c == 'S') reqSaus++;
        else reqChees++;
    }

    ll left = 0, right = 1e13;
    ll burger = 0;

    while(left <= right)
    {
        ll mid = left + (right-left)/2;
        if(makeable(mid))
        {
            burger = mid;
            left = mid+1;
        }
        else right = mid-1;

    }

    cout << burger << nln;

    return 0;
}