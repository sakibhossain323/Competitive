#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define MOD 1000000007
#define MAX 100001



void solve(int  tcase)
{

    // int n;
    // cin >> n;

    
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
    
    int m, n;
    cin >> m >> n;
    
    unordered_map <string, int> dict;
    for(int i = 0; i < m; i++)
    {
        string role;
        int money;
        cin >> role >> money;
        dict[role] = money;
    }
    
    for(int i = 0; i < n; i++)
    {
        ll salary = 0;
        string line;
        while(getline(cin, line))
        {
            if(line == ".") break;

            stringstream linestrm(line);
            string keypoint;
            while(linestrm >> keypoint)
            {
                if(dict.count(keypoint)) salary+= (ll) dict[keypoint];
            }
        }

        cout << salary << endl;
    }
    
    return 0;
}