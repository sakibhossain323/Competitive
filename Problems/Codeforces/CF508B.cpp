#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define MOD 1000000007
#define MAX 300001


#define valid(nr,nc) nr>=1 && nr<MAX && nc>=1 && nc<MAX
int dr[] = {-1, 1, 0, 0};
int dc[] = { 0, 0,-1, 1};

// vector <int> adj[MAX];
// bool visited[MAX], road[MAX];
// int dist[MAX];



int lcm(int a, int b)
{
    return (a*b)/__gcd(a,b);
}


void solve(int tcase)
{
    int n;
    cin >> n ;
    //
    vector<int> a(n);
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
    cin >> s;
    int len = s.length();
    int lstdig = s[len-1] - '0';
    int lstevn = -1;
     for(int i = len-1; i >= 0; i--) 
    {
        if((s[i]-'0')%2 == 0)
        {
            lstevn = i;
            break;
        }
    }
    if(lstevn == -1)
    {
        cout << -1 << endl;
        return 0;
    }

    for(int i = lstevn; i >= 0; i--)
    {
        int curdig = s[i]-'0';
        if(curdig%2 == 0 && curdig < lstdig) lstevn = i;
    }
    swap(s[lstevn], s[len-1]);
    cout << s << endl;
    
    return 0;
}