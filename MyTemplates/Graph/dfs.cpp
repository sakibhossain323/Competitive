#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define MOD 1000000007
#define MAX 1001



#define valid(row,col) row>=1 && row<MAX && col>=1 && col<MAX
int dir_row[] = {-1, 1, 0, 0};
int dir_col[] = { 0, 0,-1, 1};


vector <int> adj[MAX];
bool visited[MAX];


void dfs(int u)
{
    visited[u] = true;
    for(int v: adj[u])
    {
        if(!visited[v])
        {
            dfs(v);
        }
    }
}


int main ()
{
    
    
    return 0;
}