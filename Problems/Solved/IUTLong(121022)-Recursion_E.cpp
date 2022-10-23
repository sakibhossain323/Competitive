#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define MOD 1000000007
#define MAX 100001

// vector<int> adj[MAX];
// bool visited[MAX];

// void dfs(int u)
// {   

//     visited[u] = true;
    
//     for(int v: adj[u])
//     {
//         if(!visited) dfs(v);
//     }

// }



void solve(int tcase)
{
    int n;
    cin >> n;
 
    //
    // vector <int> a(n);
    // for(int i = 0; i < n; i++) cin >> a[i];
    
 

    //printf("Case #%d: %d\n", tcase, n);
}


int f(int n)
{
    if(n < 10) return n;
    return f(n%10 + f(n/10));
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
     while(true)
    {
        int n;
        cin >> n;
        if(!n) break;

        cout << f(n) << endl;
    }
    


    return 0;
}