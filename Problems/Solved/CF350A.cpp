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
    // vector <int> a(n);
    // for(int i = 0; i < n; i++) cin >> a[i];
    

    
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
    int n, m;
    cin >> n >> m;
    //
    vector <int> a(n), b(m);
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < m; i++) cin >> b[i];

   

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int minwa = b[0], minac = a[0], maxac = a[n-1];
    int v = max(2*minac, maxac);
    
    if(v >= minwa) v = -1;
    cout << v << endl;

    return 0;
}