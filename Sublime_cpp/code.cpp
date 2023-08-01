#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define nln "\n"
#define caseout(n) cout << "Case " << n << ": "


const ll MOD = 1e9+7;
const int MAX = 2e5+1;


bool cmp(pair<ll, ll>&i, pair<ll, ll> &j)
{
    if(i.first == j.first) return i.second < j.second;
    return i.first > j.first;
}

void solve(int tcase)
{
    ll  n;
    cin >> n;

    ll k;
    cin >> k;


    vector <ll> a(n);
    for(int i= 0; i < n; i++) cin >> a[i];

    
    vector<pair<ll, ll>> dead, rem;
    for(int i = 0; i < n; i++)
    {
        if(a[i]%k && a[i] > k) rem.push_back({a[i]%k, i+1});
        else if(a[i] < k) dead.push_back({a[i], i+1});
        else dead.push_back({k, i+1});
    }
    
    sort(dead.begin(), dead.end(), cmp);
    sort(rem.begin(), rem.end(), cmp);

    for(auto ptr: dead) cout << ptr.second << " ";
    for(auto ptr: rem) cout << ptr.second << " ";
        

    cout << nln;
    
}



signed main()
{
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    //---------------------------------------------------
    
    
    
    //---------------------------------------------------

    int t = 1;
    cin >> t;
    for(int tcase = 1; tcase <= t; tcase++) solve(tcase);

    return 0;
}