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


    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif

 
//----------------------------------------------------------------

    // int t;
    // cin >> t;
    // for(int tcase = 1; tcase <= t; tcase++) solve(tcase);
    

//----------------------------------------------------------------

    //
    string s;
    int k;
    cin >> s >> k;
    int w[26];
    for(int i = 0; i < 26; i++) cin >> w[i];

    int value = 0, len = s.length();
    for(int i = 0; i < len; i++) value+= w[s[i]-'a']*(i+1);

    int maxval = 0;
    for(int i = 0; i < 26; i++) maxval = max(maxval, w[i]);
    
    cout << value +(ll) maxval * (k*(2*(len+1)+k-1))/2 << endl; 

    return 0;
}