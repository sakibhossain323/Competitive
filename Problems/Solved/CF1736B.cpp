#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define MOD 1000000007
#define MAX 300001


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


void solve(int tcase)
{
    int n;
    cin >> n ;
    //
    vector<int> a(n), b(n+1);
    for(int i = 0; i < n; i++) cin >> a[i];
    b[0] = a[0], b[n] = a[n-1];
    for(int i = 1; i < n; i++) b[i] = lcm(a[i-1], a[i]);

    for(int i = 0; i < n; i++)
    {
        if(a[i] != __gcd(b[i], b[i+1]))
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
    
    
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

    int t;
    cin >> t;
    for(int tcase = 1; tcase <= t; tcase++) solve(tcase);
    

//----------------------------------------------------------------

    //
    
    
    return 0;
}