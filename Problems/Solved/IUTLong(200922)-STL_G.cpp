#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define MOD 1000000007
#define MAX 100001



void solve(int tcase)
{
    int n, k;
    cin >> n >> k;

    //
    

    //printf("Case #%d: %d\n", tcase, n);
}

bool cmp(pair<int, int> &i, pair<int, int> &j)
{
    return i.first > j.first;
}

int main ()
{
//----------------------------------------------------------------


    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif

    // freopen("scoreboard.in", "r", stdin);
 
//----------------------------------------------------------------


    // int t;
    // cin >> t;
    // for(int tcase = 1; tcase <= t; tcase++) solve(tcase);
    
    
    //
    int n;
    string s;
    cin >> n >> s;
    
    bool ans = false;
    int l = 0, r = 1;
    for(int i = 1; i < n; i++)
    {
        if(s[i] < s[i-1])
        {
            ans = true;
            r = i+1, l = i;
            break;
        }
    }

    if(ans) cout << "YES\n" << l << " " << r << endl;
    else cout << "NO" << endl;
    
    return 0;
}