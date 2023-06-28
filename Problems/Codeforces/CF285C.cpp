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
    vector <int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    
    
    
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
    int n;
    cin >> n;
    //
    vector <int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    set <int> prsnt;
    multiset <int> chng;
    for(int i = 0; i < n; i++)
    {
        if(a[i] > 0 && a[i] <= n && !prsnt.count(a[i])) prsnt.insert(a[i]);
        else chng.insert(a[i]);
    }

    ll move = 0;
    for(int i = 1; i <= n; i++)
    {
        if(!prsnt.count(i))
        {
            auto ptr = chng.begin();
            move+= abs(i-*ptr);
            chng.erase(ptr);
        }
    }
    cout << move << endl;

    return 0;
}