#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define MOD 1000000007
#define MAX 200001


// #define valid(nr,nc) nr>=1 && nr<MAX && nc>=1 && nc<MAX
// int dr[] = {-1, 1, 0, 0};
// int dc[] = { 0, 0,-1, 1};

// vector <int> adj[MAX];
// bool visited[MAX];
// int child[MAX];
//  int dist[MAX];




void solve(int tcase)
{
    // int n;
    // cin >> n;
    // //
    // vector <int> a(n);
    // for(int i = 0; i < n; i++) cin >> a[i];
    string s;
    cin >> s;
    vector <queue <int>> digpos(10);
    for(int i = 0; i < s.length(); i++) digpos[s[i]-'0'].push(i);
    
    priority_queue<int> pq;
    for(int i = 0; i < s.length(); i++)
    {
        for(int j = s[i]-'0'+1; j < 10; j++)
        {
            while(!digpos[j].empty() && digpos[j].front() < i)
            {
                digpos[j].pop();
                pq.push(min(j+1, 9));
            }
        }
    }
    for(int i = 0; i < 10; i++)
    {
        while(!digpos[i].empty())
        {
            pq.push(i);
            digpos[i].pop();
        }
    }
    string minstr;
    while(!pq.empty())
    {
        minstr.push_back('0'+pq.top());
        pq.pop();
    }
    reverse(minstr.begin(), minstr.end());
    cout << minstr << endl;
    
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