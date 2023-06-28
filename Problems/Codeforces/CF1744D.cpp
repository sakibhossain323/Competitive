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


int factpow2(int n)
{
    int p = 0;
    while(n%2 == 0) n/=2, p++;
    return p;
}

void solve(int tcase)
{
    int n;
    cin >> n;
    //
    vector <int> a(n+1);
    for(int i = 1; i <= n; i++) cin >> a[i];
   
    int pow2count = 0;
    for(int i = 1; i <=n; i++) pow2count+= factpow2(a[i]);
    if(pow2count >= n) cout << 0 << endl;
    else
    {
        vector <int> pow2s;
        for(int i = 2; i <= n; i+=2) pow2s.push_back(factpow2(i));
        sort(pow2s.begin(), pow2s.end());
        
        int minop = 0, needpow2 = 0;
        while(!pow2s.empty())
        {
            needpow2+= pow2s.back(), minop++;
            pow2s.pop_back();
            if(pow2count+needpow2 >= n)
            {
                cout << minop << endl;
                return;
            }
        }
        cout << -1 << endl; 
    }
    
    
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