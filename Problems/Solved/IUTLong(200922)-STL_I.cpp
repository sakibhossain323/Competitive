#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define MOD 1000000007
#define MAX 100001



void solve(int tcase)
{

    

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
    cin >> n;
    vector <pair <int,int>> cans;
    for(int i = 0; i < n; i++)
    {
        int can;
        cin >> can;
        cans.push_back(make_pair(can, i+1));
    }

    sort(cans.begin(), cans.end(), cmp);
    int shot = n;
    for(int i = 0; i < n; i++) shot+= (cans[i].first * i);

    cout << shot << endl;
    for(int i = 0; i < n; i++) cout << cans[i].second << " ";
    
    return 0;
}