#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define MOD 1000000007
#define MAX 100001



void solve(int  tcase)
{

    int n, k;
    cin >> n >> k;
    vector <int> candy(n);
    for(int i = 0; i < n; i++) cin >> candy[i];

    queue <int> slctd;
    multiset <int> swtst;
    for(int i = 0; i < k; i++)
    {
        slctd.push(candy[i]);
        swtst.insert(candy[i]);
    }
    cout << *swtst.rbegin() << " ";
    swtst.erase(swtst.find(slctd.front()));
    slctd.pop();
    for(int i = k; i < n; i++)
    {
        swtst.insert(candy[i]);
        slctd.push(candy[i]);
        cout << *swtst.rbegin() << " ";
        swtst.erase(swtst.find(slctd.front()));
        slctd.pop();
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
    
    
    
    return 0;
}