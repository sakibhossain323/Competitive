#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define MOD 1000000007
#define MAX 100001

bool cmp(pair<int,int> &i, pair<int, int> &j)
{
    if(i.first == j.first)
    {
        return i.second > j.second;
    }
    else return i.first < j.first;
}

void solve(int tcase)
{

    int n;
    scanf("%d", &n);
    vector <pair<int,int>> points(n);
    for(int i = 0; i < n; i++) scanf("%d %d", &points[i].first, &points[i].second);

    sort(points.begin(), points.end(), cmp);
    for(int i = 0; i < n; i++) printf("%d %d\n",points[i].first, points[i].second);
        
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


    int t;
    cin >> t;
    for(int tcase = 1; tcase <= t; tcase++) solve(tcase);
    
    
    //

    
    return 0;
}