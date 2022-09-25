#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define MOD 1000000007
#define MAX 100001



void solve(int tcase)
{

    int n;
    
        
    //
    

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
    
    
    //
    set <int> s;
    int q;
    cin >> q;
    while(q--)
    {
        int y, x;
        cin >> y >> x;
        if(y == 1)
        {
            s.insert(x);
        }
        else if(y == 2)
        {
            if(s.count(x)) s.erase(x);
        }
        else
        {
            if(s.count(x)) cout << "Yes" << endl;
            else cout << "No" << endl;
        }
    }

    
    return 0;
}