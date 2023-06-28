#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define MOD 1000000007
#define MAX 100001


#define valid(nr,nc) nr>=1 && nr<MAX && nc>=1 && nc<MAX
int dr[] = {-1, 1, 0, 0};
int dc[] = { 0, 0,-1, 1};

// vector <int> adj[MAX];
// bool visited[MAX], road[MAX];
// int dist[MAX];




void solve(int tcase)
{
    int n;
    cin >> n;
    //
    // vector <int> a(n);
    // for(int i = 0; i < n; i++) cin >> a[i];
    int zeros = 0, ones = 0;
    string s;
    cin >> s;
    for(char c: s)
    {
        if(c == '1') ones++;
        else zeros++;
    }

    int maxconc = 1, curconc = 1;
    for(int i = 1; i < n; i++)
    {
        if(s[i] == s[i-1])
        {
            curconc++;
            maxconc = max(maxconc, curconc);
        }
        else curconc = 1;
    }

    if((ll)maxconc*maxconc > (ll)zeros*ones) cout << (ll)maxconc*maxconc << endl;
    else cout << (ll)zeros*ones << endl;
    
    
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