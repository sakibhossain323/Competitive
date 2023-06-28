#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define MOD 1000000007
#define MAX 100001

// vector <int> adj[MAX];
// bool visited[MAX];

// void dfs(int u)
// {

//     visited[u] = true;

//     for(int v: adj[u])
//     {
//         if(!visited[v]) dfs(v);
//     }
// }

void solve(int tcase)
{
    int n;
    cin >> n;
    //
    vector <int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    string s;
    cin >> s;
    
    map <int, vector <int>> indx;
    for(int i = 0; i < n; i++)
    {
        if(indx.count(a[i])) indx[a[i]].push_back(i);
        else indx[a[i]] = vector <int> (1, i);
    }
    
    bool flag = true;
    for(auto i: indx)
    {
        vector <int> v = i.second;
        int vlen = v.size();
        flag = true;
        if(vlen > 1)
        {
            for(int j = 1; j < vlen; j++)
            {
                if(s[v[j]] != s[v[j-1]])
                {
                    flag = false;
                    break;
                }
            }
        }
        if(!flag) break;
    }

    cout << ((flag)? "YES":"NO") << endl;


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
    // int n, m;
    // cin >> n >> m;
    
    // for(int i = 0; i < m; i++)
    // {
    //     int u, v;
    //     cin >> u >> v;
    //     adj[u].push_back(v);
    //     adj[v].push_back(u);
    // }

    


    return 0;
}