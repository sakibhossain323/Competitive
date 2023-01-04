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
    isprime[2] = true;
    for(int i = 3; i < MAX; i+=2) isprime[i] = true;
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
    
    ll n;
    cin >> n;

    ll nod = 1;
    for(int i: primes)
    {
        int cur_pow = 0;
        if(i*i > n) break;
        while(n%i==0)
        {
            cur_pow++;
            n/=i;
        }
        nod*= (cur_pow+1);
    }

    if(n != 1) nod*=2;

    caseout(tcase) << nod-1 << nln;    
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