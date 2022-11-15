#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define MOD 1000000007
#define MAX 100001


#define valid(nr,nc) nr>=1 && nr<MAX && nc>=1 && nc<MAX
int dr[] = {-1, 1, 0, 0};
int dc[] = { 0, 0,-1, 1};

// vector <int> adj[MAX];
// bool visited[MAX], road[MAX];
// int dist[MAX];



void solve(int tcase)
{
    int n;
    cin >> n;
    //
    vector <int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    
    
    
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

    // int t;
    // cin >> t;
    // for(int tcase = 1; tcase <= t; tcase++) solve(tcase);
    

//----------------------------------------------------------------

    //
    ll x, y, n;
    cin >> x >> y >> n;

    ll val, f1 = x, f2 = y;
    if(n%6 == 1) val = f1;
    else if(n%6 == 2) val = f2;
    else if(n%6 == 3) val = (f2-f1)%MOD;
    else if(n%6 == 4) val = -f1;
    else if(n%6 == 5) val = -f2;
    else val = (-f2+f1)%MOD;
    
    if(val < 0) val+= MOD;
    cout  << val << endl;
    
    return 0;
}