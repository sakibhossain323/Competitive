#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
template <typename DT> 
using ordered_set = tree <DT, null_type, less<DT>, rb_tree_tag, tree_order_statistics_node_update>;
using ll = long long;


#define tcout(i) cout << "Case " << i << ": "
const ll MOD = 1e9+7;
const ll INF = 1e18;
const int MAX = 1e7+5;



ll spf[MAX];
vector <ll> primes;

void sieve()
{
    for(int i = 2; i < MAX; i++) spf[i] = i;
    
    for(int i = 2; i*i < MAX; i++)
    {
        if(spf[i] == i)
        {
            for(int j = i*i; j < MAX; j+=i)
            {
                if(spf[j] == j) spf[j] = i;
            }
        }
    }

    for(int i = 2; i < MAX; i++) 
        if(spf[i]==i) primes.push_back(i);
}


vector<pair<ll, ll>> factorize(ll n)
{
    vector<pair<ll, ll>> primePows;
    
    for(int i: primes)
    {
        int curPow = 0;
        if(i*i > n) break;
        while(n%i==0)
        {
            curPow++;
            n/=i;
        }

        if(curPow) primePows.push_back({i, curPow});
    }
    if(n != 1) primePows.push_back({n, 1});

    return primePows;
}


vector<pair<ll,ll>> factorize_spf(ll n)
{
    vector<pair<ll,ll>> primePows;

    while(n!=1)
    {
        ll curPrime = spf[n], curPow = 0;
        while(n % curPrime == 0)
        {
            curPow++;
            n/=curPrime;
        }

        if(curPow) primePows.push_back({curPrime, curPow});
    }

    return primePows;
}


int main ()
{
    
    
    return 0;
}