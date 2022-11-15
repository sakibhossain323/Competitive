#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define MOD 1000000007
#define MAX 3001


// #define valid(nr,nc) nr>=1 && nr<MAX && nc>=1 && nc<MAX
// int dr[] = {-1, 1, 0, 0};
// int dc[] = { 0, 0,-1, 1};

vector <int> adj[MAX];
bool visited[MAX];
// int child[MAX];
// int dist[MAX];


void dfs(int u)
{
    visited[u] = true;
    for(int v: adj[u])
    {
        if(!visited[v])
        {
            dfs(v);
        }
    }
}


void solve(int tcase)
{
    // int n;
    // cin >> n;
    // //
    // vector <int> a(n);
    // for(int i = 0; i < n; i++) cin >> a[i];
    

    
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
    int n, sx, sy, tx, ty;
    cin >> n >> sx >> sy >> tx >> ty;
    vector<int> cx(n+1), cy(n+1), cr(n+1);
    for(int i = 1; i <= n; i++) cin >> cx[i] >> cy[i] >> cr[i];

    int start, stop;
    for(int i = 1; i <= n; i++)
    {
        ll eqs = (ll)(cx[i]-sx)*(ll)(cx[i]-sx) + (ll)(cy[i]-sy)*(ll)(cy[i]-sy);
        ll eqt = (ll)(cx[i]-tx)*(ll)(cx[i]-tx) + (ll)(cy[i]-ty)*(ll)(cy[i]-ty);
        if(eqs == (ll)cr[i]*cr[i]) start = i;
        if(eqt == (ll)cr[i]*cr[i]) stop = i;
    }

    for(int i = 1; i < n; i++)
    {
        for(int j = i+1; j <=n; j++)
        {
            ll eq = (ll)(cx[j]-cx[i])*(ll)(cx[j]-cx[i]) + (ll)(cy[j]-cy[i])*(ll)(cy[j]-cy[i]);
            bool in = eq < (ll)(cr[j]-cr[i])*(ll)(cr[j]-cr[i]);
            bool out = eq > (ll)(cr[j]+cr[i])*(ll)(cr[j]+cr[i]);
            if(!in && !out)
            {
                adj[i].push_back(j);
                adj[j].push_back(i);
            }
        }
    }
    dfs(start);
    cout << ((visited[stop]) ? "Yes" : "No") << endl;

    return 0;
}