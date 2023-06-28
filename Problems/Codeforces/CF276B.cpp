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
    //
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
    map <char, int> alpha;
    for(char c: s) alpha[c]++;

    int odd = 0;
    for(auto ptr: alpha) if(ptr.second%2) odd++;

    bool second = false;
    while(true)
    {
        if(odd == 0 || odd == 1)
        {
            if(!second)
            {
                cout << "First" << endl;
                break;
            }
            else
            {
                cout << "Second" << endl;
                break;
            }
        }
        else if(odd == 2)
        {
            bool flag = true;

            for(auto &ptr: alpha)
            {
                if(ptr.second != 0 && ptr.second % 2 == 0)
                {
                    ptr.second--;
                    odd++;
                    flag = false;
                    break;
                }
            }

            if(flag)
            {
                for(auto &ptr: alpha)
                {
                    if(ptr.second > 0)
                    {
                        ptr.second--;
                        odd--;
                        break;
                    }
                }
            }

            second = !second;
        }
        else
        {
            for(auto &ptr: alpha)
            {
                if(ptr.second > 0)
                {
                    if(ptr.second%2) odd--;
                    else odd++;
                    ptr.second--;
                    break;
                }
            }

            second = !second;
        }

    }
    
    return 0;
}