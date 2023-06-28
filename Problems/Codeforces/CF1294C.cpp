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


vector <pair<int,int>> prime_factorize(int n)
{
    vector <pair<int,int>> primepows;

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
    //
    // vector <int> a(n);
    // for(int i = 0; i < n; i++) cin >> a[i];

    auto primepows = prime_factorize(n);
    int a, b, c;
    int len = primepows.size();
    if(len >= 3)
    {
        int p = primepows[0].first, e = primepows[0].second;
        a = pow(p, e);
        p = primepows[1].first, e = primepows[1].second;
        b = pow(p, e);
        c = 1;
        for(int i = 2; i < len; i++)
        {
            p = primepows[i].first, e = primepows[i].second;
            c*= ((int) pow(p, e));
        }
    }
    else if(len == 2)
    {
        auto ptr1 = primepows[0], ptr2 = primepows[1];
        if(ptr1.second+ ptr2.second <= 3)
        {
            cout << "NO\n";
            return;
        }
        a = ptr1.first, b = ptr2.first;
        c = pow(ptr1.first, ptr1.second-1);
        c*= ((int) pow(ptr2.first, ptr2.second-1));
    }
    else if(len == 1 && primepows[0].second >= 6)
    {
        auto ptr = primepows[0];
        a = ptr.first;
        b = a*a;
        c = pow(a, ptr.second-3);
    }
    else
    {
        cout << "NO\n";
        return;
    }
    

    cout << "YES\n" << a << " " << b << " " << c << nln;
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