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


void solve(int tcase)
{
    int n;
    cin >> n;
    // //
    // vector <int> a(n);
    // for(int i = 0; i < n; i++) cin >> a[i];
    string s;
    cin >> s;
    int len = s.length();
    ll div = 0;
    for(int i = 0; i <  len; i++)
    {
        vector <int> freq(10, 0);
        int maxfreq = 0, uniq = 0;

        for(int j = i; j-i < 100 && j < len; j++)
        {   
            int curr = s[j]-'0';
            freq[curr]++;
            maxfreq = max(freq[curr], maxfreq);
            if(freq[curr] == 1) uniq++;
            if(uniq >= maxfreq) div++;
        }
    }
    cout << div << endl;
    
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