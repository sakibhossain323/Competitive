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
    vector <int> a(n), b(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cin >> b[i];
    
    vector <pair<int, int>> frnd;
    for(int i = 0; i < n; i++) frnd.emplace_back(b[i]-a[i], i);
    sort(frnd.begin(), frnd.end());

    int l = 0, r = n-1, grp = 0;
    while(l < r)
    {
        auto poor = frnd[l], rich = frnd[r];
        if(b[poor.second]+b[rich.second] >= a[poor.second]+a[rich.second])
        {
            grp++, l++, r--;
        }
        else l++;
        
    }
    cout << grp << endl;
    
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