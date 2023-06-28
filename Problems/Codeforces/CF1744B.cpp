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
    int n, q;
    cin >> n >> q;
    //
    vector <int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    
    ll oddsum = 0, evensum = 0;
    int oddcount = 0, evencount = 0;
    for(int i = 0; i < n; i++)
    {
        if(a[i]%2) oddsum+= (ll)a[i], oddcount++;
        else evensum+= (ll) a[i], evencount++;
    }

    for(int i = 0; i < q; i++)
    {
        int typ, x;
        cin >> typ >> x;

        if(typ)
        {
            if(x%2)
            {
                evensum+= (oddsum + (ll) oddcount * x);
                evencount+= oddcount;
                oddsum = 0, oddcount = 0;
            }
            else
            {
                oddsum+= ((ll) oddcount*x);
            }
        }
        else
        {
             if(x%2)
            {
                oddsum+= (evensum + (ll) evencount * x);
                oddcount+= evencount;
                evensum = 0, evencount = 0;
            }
            else
            {
                evensum+= ((ll) evencount*x);
            }
            
        }

        cout << evensum + oddsum << endl;

    }


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