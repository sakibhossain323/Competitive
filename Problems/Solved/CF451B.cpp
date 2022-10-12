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
    


    //printf("Case #%d: %d\n", tcase, n);
}



int main ()
{
//----------------------------------------------------------------


    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

 
//----------------------------------------------------------------


    // int t;
    // cin >> t;
    // for(int tcase = 1; tcase <= t; tcase++) solve(tcase);
    

//----------------------------------------------------------------

    //
    int n;
    cin >> n;
    vector <int> a(n), srt_a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) srt_a[i] = a[i];
    sort(srt_a.begin(), srt_a.end());

    map <int, int> indx;
    for(int i = 0; i < n; i++) indx[srt_a[i]] = i;

    int l = -1, r = -1;
    for(int i = 0; i < n; i++)
    {
        if(indx[a[i]]!= i)
        {
            l = i;
            break;
        }
    }
    for(int i = n-1; i >= 0; i--)
    {
        if(indx[a[i]]!= i)
        {
            r = i;
            break;
        }
    }

    if(l == -1 && r == -1) cout << "yes\n1 1" << endl;
    else
    {
        reverse(a.begin()+l, a.begin()+r+1);
        for(int i = 0; i < n; i++)
        {
            if(indx[a[i]] != i)
            {
                cout << "no" << endl;
                return 0;
            }
        }
        cout << "yes\n" << l+1 << " " << r+1 << endl;
    }


    return 0;
}