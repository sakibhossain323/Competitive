#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define MOD 1000000007
#define MAX 100001



void solve(int tcase)
{

    int n;
    string s;
    cin >> n >> s;

    //
    vector <bool> us(13);
    for(int i = 0; i < n; i++) us[s[i]-'A'] = true;

    vector <pair <int, int>> others;
    for(int i = 0; i < 13; i++)
    {
        int temp;
        cin >> temp;
        others.push_back(make_pair(temp, i));
    }

    sort(others.begin(), others.end());
    for(int i = 12; i >= 0; i--)
    {
        if(!us[others[i].second])
        {
            cout << (char)(others[i].second + 'A') << endl;
            return;
        }
    }

    //printf("Case #%d: %d\n", tcase, n);
}



int main ()
{
//----------------------------------------------------------------


    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif

    freopen("scoreboard.in", "r", stdin);
 
//----------------------------------------------------------------


    int t;
    cin >> t;
    for(int tcase = 1; tcase <= t; tcase++) solve(tcase);
    
    
    //

    
    return 0;
}