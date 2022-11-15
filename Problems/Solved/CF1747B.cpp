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
    set <int> a_pos, n_pos;
    for(int i = 2; i <= 3*n; i+=3) a_pos.insert(i);
    for(int i = 3; i <= 3*n; i+=3) n_pos.insert(i);

    vector <pair<int, int>> swps;
    while(true)
    {
        int cur_a = *(a_pos.begin());
        int cur_n = *(n_pos.rbegin());
        if(cur_a > cur_n) break;
        a_pos.erase(cur_a);
        n_pos.erase(cur_n);
        a_pos.insert(cur_n);
        n_pos.insert(cur_a);
        swps.push_back(make_pair(cur_a, cur_n));
    }

    cout << swps.size() << endl;
    for(auto i: swps) cout << i.first << " " << i.second << endl;
    
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