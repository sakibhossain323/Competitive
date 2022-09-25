#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define MOD 1000000007
#define MAX 100001



void solve(int  tcase)
{

    // int n;
    // cin >> n;

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
    
    unordered_map <string, string> dict;

    string line;
    while(getline(cin, line))
    {
        if(line == "") break;
        stringstream linestrm(line);

        string eng, frgn;
        linestrm >> eng >> frgn;

        dict[frgn] = eng;
    }
    while(cin >> line)
    {
        if(dict.count(line)) cout << dict[line] << endl;
        else cout << "eh" << endl;
    }

    return 0;
}