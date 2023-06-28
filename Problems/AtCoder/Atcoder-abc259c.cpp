#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define MOD 1000000007
#define MAX 10001


void solve(int tcase)
{
    int n;
    cin >> n;

    //
    vector <int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];



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
    

//----------------------------------------------------------------

    //
    string s, t;
    cin >> s >> t;
    vector<pair<char, int>> seq1, seq2;

    seq1.emplace_back(s[0], 1);
    for(int i = 1; i < s.length(); i++)
    {
        if(s[i]==s[i-1]) seq1.back().second++;
        else seq1.emplace_back(s[i], 1);
    }

    seq2.emplace_back(t[0], 1);
    for(int i = 1; i < t.length(); i++)
    {
        if(t[i]==t[i-1]) seq2.back().second++;
        else seq2.emplace_back(t[i], 1);
    }

    bool flag = true;
    if(seq1.size() != seq2.size()) flag = false;
    else
    {
        for(int i = 0; i < seq1.size(); i++)
        {
            if(seq1[i].first != seq2[i].first)
            {
                flag = false;
                break;
            }
            else if(seq1[i].second > seq2[i].second)
            {
                flag = false;
                break;
            }
            else if(seq1[i].second == 1 && seq2[i].second != 1)
            {
                flag = false;
                break;
            }
        }
    }
    cout << ((flag) ? "Yes": "No") << endl;

    return 0;
}