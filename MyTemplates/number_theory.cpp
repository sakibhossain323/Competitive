#include <bits/stdc++.h>
using namespace std;

using ll = long long;
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


int main ()
{
    
    
    return 0;
}