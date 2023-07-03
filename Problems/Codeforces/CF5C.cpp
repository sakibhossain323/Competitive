// Problem: Longest Regular Bracket Sequence (https://codeforces.com/contest/5/problem/C)
// Submission: https://codeforces.com/contest/5/submission/211822989

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define nln "\n"
#define caseout(n) cout << "Case " << n << ": "


const ll MOD = 1e9+7;
const int MAX = 10;//1e5+1;





void solve(int tcase)
{
    // ll  n;
    // cin >> n;

    // ll k;
    // cin >> k;


    // vector <ll> a(n);
    // for(int i= 0; i < n; i++) cin >> a[i];

    
    string s;
    cin >> s;

    int len = s.length();
    vector<int> seq(len, -1);
    stack<int> stk;

    for(int i = 0; i < len; i++)
    {
        char c = s[i];
        if(c == '(') stk.push(i);
        else if(c == ')' && !stk.empty())
        {
            seq[i] = stk.top();
            stk.pop();
        }
    }

    for(int i = 1; i < len; i++)
    {
        if(seq[i] > 0)
        {
            int prv = seq[i]-1;
            if(s[prv] == ')' && seq[prv] != -1)
            {
                seq[i] = seq[prv];
            }
        }
    }

    map<int, int> freq;
    for(int i = 0; i < len; i++)
    {
        if(seq[i]!= -1)
        {
            int seqlen = i-seq[i]+1;
            freq[seqlen]++;
        }
    }

    if(freq.empty()) cout << "0 1\n";
    else
    {
        auto ans = prev(freq.end());
        cout << ans->first << " " << ans->second << nln;
    }

    cout << nln;
    
}


void local_io()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
}

signed main ()
{
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    //--------------------------------------------------
    
    local_io();

    //---------------------------------------------------
    
    

    //---------------------------------------------------

    int t = 1;
    // cin >> t;
    for(int tcase = 1; tcase <= t; tcase++) solve(tcase);

    return 0;
}