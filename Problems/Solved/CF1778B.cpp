#include <bits/stdc++.h>
using namespace std;


using ll = long long;
#define caseout(n) cout << "Case " << n << ": "
#define nln "\n"

#define MOD 1000000007
#define MAX 1000001





void solve(int tcase)
{
    // int n;
    // cin >> n;
    
    // vector <int> a(n);
    // for(int i = 0; i < n; i++) cin >> a[i];

    int n, m, d;
    cin >> n >> m >> d;

    vector <int> p(n), a(m);
    for(int i = 0; i < n; i++) cin >> p[i];
    for(int i = 0; i < m; i++) cin >> a[i];

    vector <int> pos(n+1);
    for(int i = 0; i < n; i++) pos[p[i]] = i+1;
    
    int moves = n;
    for(int i = 0; i < m-1; i++)
    {
        if(pos[a[i]] > pos[a[i+1]])
        {
            moves = 0;
            break;
        }
        else moves = min(moves, pos[a[i+1]]-pos[a[i]]);
    }

    for(int i = 0; i < m-1; i++)
    {
        if(pos[a[i]]+d < pos[a[i+1]])
        {
            moves = 0;
            break;
        }
        else if(pos[a[i]]+d == pos[a[i+1]]) 
        {
            if(pos[a[i]]!= 1 || pos[a[i+1]] != n) moves = min(moves, 1);
            
        }
        else if(pos[a[i]] < pos[a[i+1]] && pos[a[i]]+d > pos[a[i+1]])
        {
            int exceeded = pos[a[i]]+d-pos[a[i+1]];
            if(pos[a[i]]-1 + n-pos[a[i+1]] >= exceeded+1) moves = min(moves, exceeded+1);
        }
    }

    cout << moves << nln;
}


void local_io()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
}

int main ()
{
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    //--------------------------------------------------
    
    local_io();

    //---------------------------------------------------

    int t;
    cin >> t;
    for(int tcase = 1; tcase <= t; tcase++) solve(tcase);

    //---------------------------------------------------
    
    

    return 0;
}