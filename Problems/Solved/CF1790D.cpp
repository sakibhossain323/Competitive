#include <bits/stdc++.h>
using namespace std;


using ll = long long;
#define caseout(n) cout << "Case " << n << ": "
#define nln "\n"

#define MOD 1000000007
#define MAX 1000001



void solve(int tcase)
{
    int n;
    cin >> n;
    
    vector <int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    map <int, int> occ;
    for(int i: a) occ[i]++;

    int prev_i = -1, prevmax = -1;
    int minset = 0;
    for(auto ptr: occ)
    {
        if(prev_i== -1)
        {
            prev_i = ptr.first;
            prevmax = ptr.second;
            continue;
        }

        if(prev_i+1 != ptr.first) minset+= prevmax;
        else if(prevmax > ptr.second) minset+= (prevmax-ptr.second);

        prev_i = ptr.first;
        prevmax = ptr.second;
    }
    minset+= (prev(occ.end())->second);

    cout << minset << nln;

}


void local_io()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
}

int main ()
{
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    //--------------------------------------------------
    
    local_io();

    //---------------------------------------------------

    int t;
    cin >> t;
    for(int tcase = 1; tcase <= t; tcase++) solve(tcase);

    //---------------------------------------------------
    
    

    return 0;
}