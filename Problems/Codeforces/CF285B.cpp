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
    int n, s, t;
    cin >> n >> s >> t;
    //
    map <int, int> par;
    for(int i = 1; i <= n; i++)
    {
        int pi;
        cin >> pi;
        par[i] = pi;
    }

    int shuffle = 0, pos = s;
    while(shuffle <= n)
    {
        if(pos == t)
        {
            cout << shuffle << endl;
            return 0;
        }

        pos = par[pos];
        shuffle++;
    }
    cout << -1 << endl;

    return 0;
}