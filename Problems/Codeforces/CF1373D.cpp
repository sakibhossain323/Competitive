// Problem: Maximum Sum on Even Positions (https://codeforces.com/contest/1373/problem/D)
// Submission: https://codeforces.com/contest/1373/submission/216363639

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define nln "\n"
#define caseout(n) cout << "Case " << n << ": "


const ll MOD = 1e9+7;
const int MAX = 2e5+1;


ll kadanes(vector<ll>&a)
{
    ll sum = 0;
    ll maxSum = 0;
    for(int i = 0; i < a.size(); i++)
    {
        sum = max(a[i], a[i]+sum);
        maxSum = max(maxSum, sum);
    }

    return maxSum;
}


void solve(int tcase)
{
    ll  n;
    cin >> n;

    // ll m;
    // cin >> m;


    vector <ll> a(n);
    for(int i= 0; i < n; i++) cin >> a[i];

    ll sum = 0;
    for(int i = 0; i < n; i+=2) sum+=a[i];

    vector<ll> revEven, revOdd;
    for(int i = 1; i < n; i+=2) revEven.push_back(a[i]-a[i-1]);
    for(int i = 2; i < n; i+=2) revOdd.push_back(a[i-1]-a[i]);

    cout << sum + max(kadanes(revEven), kadanes(revOdd));


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