#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define MOD 1000000007
#define MAX 100001

vector <int> adj[MAX];
bool visited[MAX];

void dfs(int u)
{

    visited[u] = true;

    for(int v: adj[u])
    {
        if(!visited[v]) dfs(v);
    }
}

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
    int n, m;
    cin >> n >> m;
    vector <pair<ll, int>> bribe;
    for(int i = 1; i <= n; i++)
    {
        ll gold_i;
        cin >> gold_i;
        bribe.push_back(make_pair(gold_i, i));
    }
    for(int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    ll gold = 0;
    sort(bribe.begin(), bribe.end());

    for(auto i: bribe)
    {
        if(!visited[i.second])
        {
            gold+= i.first;
            dfs(i.second);
        }
    }
    cout << gold << endl;


    return 0;
}