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


ll nextpow2(int x)
{
    ll res = 1;
    while(res < x) res*=2;
    return res;
}

void solve(int tcase)
{
    int n;
    cin >> n;
    //
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    
    cout << n << endl;
    for(int i = 0; i < n; i++)
    {
        cout << i+1 << " " << nextpow2(a[i]) - a[i] << endl;
    } 
    
    //printf("Case #%d: %d\n", tcase, n);
}



int main ()
{
//----------------------------------------------------------------


    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

 
//----------------------------------------------------------------

    int t;
    cin >> t;
    for(int tcase = 1; tcase <= t; tcase++) solve(tcase);
    

//----------------------------------------------------------------

    //
    
    
    
    
    return 0;
}