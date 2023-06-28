#include <bits/stdc++.h>
using namespace std;


using ll = long long;
#define caseout(n) cout << "Case " << n << ": "
#define nln "\n"

#define MOD 1000000007
#define MAX 1000001


bool isprime[MAX];
vector <int> primes;

void sieve()
{
    for(int i = 2; i < MAX; i++) isprime[i] = true;
    
    for(int i = 2; i*i < MAX; i++)
    {
        if(isprime[i])
        {
            for(int j = i*i; j < MAX; j+=i) isprime[j] = false;
        }
    }

    for(int i = 1; i < MAX; i++) if(isprime[i]) primes.push_back(i);
}


vector <pair<ll, int>> prime_factorize(ll n)
{
    vector <pair<ll, int>> primepows;

    for(int i: primes)
    {
        int cur_pow = 0;
        if(i*i > n) break;
        while(n%i==0)
        {
            cur_pow++;
            n/=i;
        }

        if(cur_pow) primepows.emplace_back(i, cur_pow);
    }

    if(n != 1) primepows.emplace_back(n, 1);

    return primepows;
}


void solve(int tcase)
{
    int n;
    cin >> n;
    
    // vector <int> a(n);
    // for(int i = 0; i < n; i++) cin >> a[i];

    auto primepows = prime_factorize(n);

    ll ans = 0;
    bool done = false;
    while(!done)
    {
        done = true;
        ll product = 1;
        for(auto &ptr: primepows)
        {
            if(ptr.second!= 0)
            {
                product*= ptr.first;
                ptr.second--;
                done = false;
            }
        }

        if(!done)ans+= product;
    }

    cout << ans << nln;

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

    sieve();

    //---------------------------------------------------

    int t;
    cin >> t;
    for(int tcase = 1; tcase <= t; tcase++) solve(tcase);

    //---------------------------------------------------
    
    

    return 0;
}