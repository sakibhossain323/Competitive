#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define MOD 1000000007
#define MAX 100001



void solve(int tcase)
{
    int n;
    cin >> n;

    //
    vector <int> ratin(n);
    for(int i = 0; i < n; i++) cin >> ratin[i];
    sort(ratin.begin(), ratin.end());

    vector <int> team(n);
    for(int i = 0; i < n; i++)
    {
        int teamCount = 0;
        for(int j = i; j+5 < n; j++)
        {
            if(ratin[j+5]-ratin[j] <= 1000) teamCount++, j+=5;
        }
        team[i] = teamCount;
    }

    int maxteam = 0;
    for(int i = 0; i < n; i++) maxteam = max(team[i], maxteam);
    cout << maxteam << endl;


    //printf("Case #%d: %d\n", tcase, n);
}



int main ()
{
//----------------------------------------------------------------


    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif

    freopen("overcode.in", "r", stdin);
 
//----------------------------------------------------------------


    int t;
    cin >> t;
    for(int tcase = 1; tcase <= t; tcase++) solve(tcase);
    

//----------------------------------------------------------------

    //
    
    
    return 0;
}