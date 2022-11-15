//---------- Collab Contest 03 ----------
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
    // int n;
    // cin >> n;
    // //
    // vector <int> a(n), b(n);
    // for(int i = 0; i < n; i++) cin >> a[i];
    // for(int i = 0; i < n; i++) cin >> b[i];
    string line;
    getline(cin, line);
    if(line == "") getline(cin, line);
    vector <int> freq(26, 0);
    for(char c: line)
    {
        if(c >= 'a' && c <= 'z') freq[c-'a']++;
        else if(c >= 'A' && c <= 'Z') freq[c-'A']++;
    }
    string miss = "";
    for(int i = 0; i < 26; i++) if(!freq[i]) miss.push_back(i+'a');
    if(!miss.length()) cout << "pangram" << endl;
    else cout << "missing " << miss << endl;

    
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
    

    return 0;
}