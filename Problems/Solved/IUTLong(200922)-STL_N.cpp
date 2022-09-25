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
    unordered_map <string, int> marks;
    int q;
    cin >> q;
    while(q--)
    {
        int typ, y;
        string x;
        cin >> typ;
        if(typ == 1)
        {
            cin >> x >> y;
            if(marks.count(x)) marks[x]+=y;
            else marks[x] = y;
        }
        else if(typ == 2)
        {
            cin >> x;
            marks.erase(x);
        }
        else
        {
            cin >> x;
            if(marks.count(x)) cout << marks[x] << endl;
            else cout << 0 << endl;
        }
    }

    
    return 0;
}