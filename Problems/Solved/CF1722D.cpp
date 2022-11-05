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
    string s;
    cin >> s;
    ll value = 0;
    for(int i = 0; i < n; i++)
    {
        if(s[i] == 'L') value+= i;
        else value += n-i-1;
    }

    deque <int> left, right;
    for(int i = 0; i < n/2; i++) if(s[i] == 'L') left.push_back(i);
    for(int i = n/2; i < n; i++)
    {
        if(n%2 && i == n/2) continue;
        if(s[i] == 'R') right.push_back(i);
    }

    int k = 0;
    while(!left.empty() || !right.empty())
    {
        if(left.empty())
        {
            value+= 2*right.back() - n + 1; // i+(n-i-1);
            right.pop_back();
        }
        else if(right.empty())
        {
            value+= -2*left.front() + n - 1; // -i+(n-i-1);
            left.pop_front();
        }
        else
        {
            int lval = -2*left.front() + n - 1;
            int rval = 2*right.back() - n + 1;

            if(lval > rval)
            {
                value+= lval;
                left.pop_front();
            }
            else
            {
                value+= rval;
                right.pop_back();
            }
        }
        cout << value << " ";
        k++;
    }
    while(k < n)
    {
        cout << value << " ";
        k++;
    }
    cout << endl;

    
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

    int t;
    cin >> t;
    for(int tcase = 1; tcase <= t; tcase++) solve(tcase);
    

//----------------------------------------------------------------

    //
    
    

    return 0;
}