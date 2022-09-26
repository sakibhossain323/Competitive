#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define MOD 1000000007
#define MAX 100001



void solve(int tcase)
{

    // int n;
    // cin >> n;

    //
    string s, t;
    cin >> s >> t;

    set <int> chrs;
    int len = s.length();
    for(int i = 0; i < len; i++) chrs.insert(s[i]);

    bool ans = false;
    for(int i = 0; i < len; i++)
    {
        if(chrs.count(t[i]))
        {
            ans = true;
            break;
        }
    }
    cout << ((ans)? "YES": "NO") << endl;

    //printf("Case #%d: %d\n", tcase, n);
}



int main ()
{
//----------------------------------------------------------------


    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif

    // freopen("overcode.in", "r", stdin);
 
//----------------------------------------------------------------


    int t;
    cin >> t;
    for(int tcase = 1; tcase <= t; tcase++) solve(tcase);
    
    
    //
    
    
    return 0;
}