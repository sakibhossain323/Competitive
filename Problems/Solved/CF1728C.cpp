#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define MOD 1000000007
#define MAX 200001


#define valid(nr,nc) nr>=1 && nr<MAX && nc>=1 && nc<MAX
int dr[] = {-1, 1, 0, 0};
int dc[] = { 0, 0,-1, 1};

// vector <int> adj[MAX];
// bool visited[MAX];
// int child[MAX];
//  int dist[MAX];

// void dfs(int u)
// {
//     visited[u] = true;

//     for(int v: adj[u])
//     {
//         if(!visited[v])
//         {
//             dfs(v);
//             if(adj[v].size() == 1) child[u]+= 1;
//             else child[u]+= child[v]+1;
//         }
        
//     }
// }


void solve(int tcase)
{
    int n;
    cin >> n;
    //
    vector <int> a(n), b(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cin >> b[i];
    
    multiset <int> aset, bset;
    for(int i = 0; i < n; i++) aset.insert(a[i]), bset.insert(b[i]);

    int op = 0;
    while(!aset.empty())
    {
        auto ptr_a = prev(aset.end());
        auto ptr_b = bset.find(*ptr_a);
        if(ptr_b == bset.end()) ptr_b = prev(ptr_b);

        if(*ptr_a == *ptr_b) aset.erase(ptr_a), bset.erase(ptr_b);
        else if(*ptr_a > *ptr_b)
        {
            int len = log10(*ptr_a)+1;
            aset.erase(ptr_a);
            aset.insert(len);
            op++;
        }
        else
        {
            int len = log10(*ptr_b)+1;
            bset.erase(ptr_b);
            bset.insert(len);
            op++;
        }
    }
    cout << op << endl;
    
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