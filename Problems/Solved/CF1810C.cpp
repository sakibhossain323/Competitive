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

    ll c, d;
    cin >> c >> d;
    
    vector <int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    sort(a.begin(), a.end());

    ll cost = 0;
    vector <int> v;
    if(a[0]!= 1) 
    {
        v.push_back(1);
        cost+= d;
    }

    for(int i: a)
    {
        if(!v.empty() && v.back() == i)
        {
            cost+= c;
            continue;
        }
        v.push_back(i);
    }

    int plen = v.size();
    ll curCost = INT64_MAX;

    for(int i = 0; i < plen; i++)
    {
        curCost = min(curCost, (plen-i-1)*c + (v[i]-i-1)*d);
    }

    cout << cost+curCost << nln;

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