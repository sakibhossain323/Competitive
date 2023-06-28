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
    
    vector <int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    vector <ll> pre(n), suf(n);
    for(int i = 1; i < n; i++) 
    {
        if(a[i-1]) pre[i] = pre[i-1] + 1;
        else pre[i] = pre[i-1];
    }
    for(int i = n-2; i >= 0; i--)
    {
         if(!a[i+1]) suf[i] = suf[i+1] + 1;
         else suf[i] = suf[i+1];
    }

    ll inv = 0;
    for(int i = 0; i < n; i++) if(a[i]) inv+=suf[i];

    ll flip = 0;

    for(int i = 0; i < n; i++)
    {
        if(a[i]) flip = max(flip, pre[i]-suf[i]);
        else if(!a[i]) flip = max(flip, suf[i]-pre[i]);
    }

    
    cout << inv+flip << nln;
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