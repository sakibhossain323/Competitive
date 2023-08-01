#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define nln "\n"


const ll MOD = 1e9+7;
const int MAX = 2e5+1;


const ll MAX2 = 3e5;
const ll MAX3 = 1e9;


signed main()
{
    ll seed;
    cin >> seed;
    srand(seed);


    cout << 1 << nln; // testcase

    ll n = rand()%5 + 1;
    ll k = rand()%MAX3 + 1;
    cout << n << " " << k << nln;
    while(n--) cout << rand()%MAX3 + 1 << " ";



    return 0;
}