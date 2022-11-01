#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define MOD 1000000007
#define MAX 1000001


#define valid(nr,nc) nr>=1 && nr<MAX && nc>=1 && nc<MAX
int dr[] = {-1, 1, 0, 0};
int dc[] = { 0, 0,-1, 1};

// vector <int> adj[MAX];
// bool visited[MAX], road[MAX];
// int dist[MAX];



int lcm(int a, int b)
{
    return (a*b)/__gcd(a,b);
}

vector<bool> sieve(MAX, true);
void mark()
{
    sieve[0] = sieve[1] = false;
    for(int i = 4; i < MAX; i+=2) sieve[i] = false;
    for(int i = 3; i*i <= MAX; i+=2)
    {
        if(sieve[i]) for(int j = i*i; j < MAX; j+=i) sieve[j] = false;
    }
}

void solve(int tcase)
{
    int n;
    cin >> n;
    //
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    
    
    
    //printf("Case #%d: %d\n", tcase, n);
}



int main ()
{
//----------------------------------------------------------------


    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif

 
//----------------------------------------------------------------

    // int t;
    // cin >> t;
    // for(int tcase = 1; tcase <= t; tcase++) solve(tcase);
    

//----------------------------------------------------------------

    //
    mark();
    int n;
    cin >> n;
    while (n--)
    {
        ll x;
        cin >> x;
        int root = sqrt(x);
        if((ll)root*root == x && sieve[root] ) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
    
    
    return 0;
}