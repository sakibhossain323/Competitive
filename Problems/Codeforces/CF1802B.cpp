#include <bits/stdc++.h>
using namespace std;


using ll = long long;
#define caseout(n) cout << "Case " << n << ": "
#define nln "\n"

#define MOD 1000000007
#define MAX 100001



void solve(int tcase)
{
    int  n;
    cin >> n;


    vector <int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];


    int buy = 0, empt = 0, cnt = 0;
    for(int i: a)
    {
        if(i == 1)
        {
            cnt++;
            if(empt == 0) buy++;
            else empt--;
        }
        else
        {
            if(cnt == 0) continue;
            empt = buy - (cnt/2+1);
        }
    }

    cout << buy << nln;

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

    int t = 1;
    cin >> t;
    for(int tcase = 1; tcase <= t; tcase++) solve(tcase);

    return 0;
}