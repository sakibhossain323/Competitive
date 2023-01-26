#include <bits/stdc++.h>
using namespace std;


using ll = long long;
#define caseout(n) cout << "Case " << n << ": "
#define nln "\n"

#define MOD 1000000007
#define MAX 100001

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
    
    sieve();

    int n;
    cin >> n;

    int prime_count = upper_bound(primes.begin(), primes.end(), n+1) - primes.begin();
    if(prime_count == n) cout << 1 << nln;
    else cout << 2 << nln;

    for(int i = 2; i <= n+1; i++)
    {
        if(isprime[i]) cout << 1 << " ";
        else cout << 2 << " ";
    }
    cout << nln;

    return 0;
}