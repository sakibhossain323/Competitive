#include <bits/stdc++.h>
using namespace std;

using ll = long long;
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


int main ()
{
    
    
    return 0;
}