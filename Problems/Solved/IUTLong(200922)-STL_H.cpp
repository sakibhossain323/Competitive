#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define MOD 1000000007
#define MAX 100001


bool cmp(pair<int, int> &i, pair <int, int> &j)
{
    if(i.second == j.second) return i.first < j.first;
    else return i.second < j.second;
}

string move_right(int step)
{
    string path;
    for(int i = 0; i < step; i++) path.push_back('R');
    return path;
}

string move_up(int step)
{
    string path;
    for(int i = 0; i < step; i++) path.push_back('U');
    return path;
}

void solve(int tcase)
{
    int n;
    cin >> n;

    //
    vector <pair <int, int>> points(n);
    for(int i = 0; i < n; i++) cin >> points[i].first >> points[i].second;
    
    sort(points.begin(), points.end(), cmp);
    string path = move_right(points[0].first);
    path+= move_up(points[0].second);
    int rmost = points[0].first;

    bool ans = true;
    for(int i = 1; i < n; i++)
    {
        int cur_x = points[i].first;
        if(cur_x < rmost)
        {
            ans = false;
            break;
        }

        rmost = cur_x;
        path+= move_right(cur_x-points[i-1].first);
        path+= move_up(points[i].second-points[i-1].second);
    }

    if(ans) cout << "YES\n" << path << endl;
    else cout << "NO" << endl;


    //printf("Case #%d: %d\n", tcase, n);
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


    int t;
    cin >> t;
    for(int tcase = 1; tcase <= t; tcase++) solve(tcase);
    
    
    //
    
    
    return 0;
}