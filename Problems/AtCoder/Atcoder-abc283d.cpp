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
    string s;
    cin >> s;
    stack <set <char>> stk;
    set <char> temp;
    vector <int> alph(26, 0);
    for(char c: s)
    {
        if(c == '(' && !temp.empty())
        {
            stk.push(temp);
            temp.clear();
        }
        else if(c == ')')
        {
            for(char ctemp: temp) alph[ctemp-'a']--;
            temp.clear();
            if(!stk.empty())
            {
                temp = stk.top();
                stk.pop();
            }
        }
        else if(c != '(')
        {
            if(alph[c-'a'])
            {
                cout << "No" << endl;
                return 0;
            }
            alph[c-'a']++;
            temp.insert(c);
        }
    }
    cout << "Yes" << endl;

    return 0;
}