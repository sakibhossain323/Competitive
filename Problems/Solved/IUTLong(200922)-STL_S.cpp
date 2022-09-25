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
    
    unordered_map <int, int> freq;
    queue <int> q;
    int n;
    while(cin >> n)
    {
        if(freq.count(n)) freq[n]++; 
        else
        {
            q.push(n);
            freq[n] = 1;
        }
    }

    while(!q.empty())
    {
        cout << q.front() << " " << freq[q.front()] << endl;
        q.pop();
    }
    
    return 0;
}