#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define MOD 1000000007
#define MAX 10001


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



void solve(int tcase)
{
    int n;
    cin >> n;
    // //
    // vector <int> a(n);
    // for(int i = 0; i < n; i++) cin >> a[i];
    
    
    string s;
    cin >> s;

    map <string, int> sublen2;
    string prevtemp = "";
    int previndx = -1;
    for(int i = 0; i < s.length()-1; i++) 
    {
        string temp = s.substr(i, 2);
        if(temp == prevtemp && previndx == i) continue;
        else if(sublen2.count(temp))
        {
            sublen2[temp]++;
            i++;
        }
        else sublen2[temp]++;
        prevtemp = temp;
        previndx = i+1;
    }
    
    for(auto &ptr: sublen2)
    {
        if(ptr.second > 1)
        {
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
    
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