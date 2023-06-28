#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define MOD 1000000007
#define MAX 100001


// #define valid(nr,nc) nr>=1 && nr<MAX && nc>=1 && nc<MAX
// int dr[] = {-1, 1, 0, 0};
// int dc[] = { 0, 0,-1, 1};

// vector <int> adj[MAX];
// bool visited[MAX];
// int parent[MAX];
// int dist[MAX];


// void dfs(int u)
// {
//     visited[u] = true;
//     for(int v: adj[u])
//     {
//         if(!visited[v])
//         {
//             dfs(v);
//         }
//     }
// }

int sum[101];
void precalc()
{
    for(int i = 1; i < 101; i++) sum[i] = i+sum[i-1];
}


void solve(int tcase)
{
    int n, s;
    cin >> n >> s;
    //
    vector <int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    
    int foundsum = 0, foundmax = a[0];
    set <int> found;
    for(int i = 0; i < n; i++)
    {
        foundsum+= a[i];
        foundmax = max(foundmax, a[i]);
        found.insert(a[i]);
    }
    
    for(int i = 1; i < foundmax; i++)
    {
        if(!found.count(i))
        {
            if(s-i < 0)
            {
                cout << "NO" << endl;
                return;
            }
            else s-= i, foundsum+= i;
        }
    }

    if(s == 0) cout << "YES" << endl;
    else
    {
        bool flag = false;
        for(int i = foundmax+1; i < 101; i++)
        {
            if(foundsum+s == sum[i])
            {
                flag = true;
                break;
            }
        }
        cout << ((flag)? "YES":"NO") << endl;
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

    precalc();
    int t;
    cin >> t;
    for(int tcase = 1; tcase <= t; tcase++) solve(tcase);
    

//----------------------------------------------------------------

    //
    

    return 0;
}