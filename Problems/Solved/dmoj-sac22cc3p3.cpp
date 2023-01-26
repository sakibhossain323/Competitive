// IUT ICPC Selection Contest Dhaka Regional 2022

#include <bits/stdc++.h>
using namespace std;


using ll = long long;
#define caseout(n) cout << "Case " << n << ": "
#define nln "\n"

#define MOD 1000000007
#define MAX 1000001


int maxdig = 1, dignow = 1;

bool cmp(string i, string j)
{
    return i[maxdig-dignow] < j[maxdig-dignow];
}


void solve(int tcase)
{
    int n;
    cin >> n;
    
    // vector <int> a(n);
    // for(int i = 0; i < n; i++) cin >> a[i];

    
    
    
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
    
    // local_io();

    //---------------------------------------------------

    // int t;
    // cin >> t;
    // for(int tcase = 1; tcase <= t; tcase++) solve(tcase);

    //---------------------------------------------------
    
    int n;
    cin >> n;
    vector <string> a(n);
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        maxdig = max(maxdig, (int)a[i].length());
    }

    for(int i = 0; i < n; i++)
    {
        int len = a[i].length();
        string temp = "";
        int zero = maxdig-len;
        while(zero--) temp.push_back('0');
        a[i] = temp + a[i];
    }

    for(int i = 0; i < maxdig; i++)
    {
        stable_sort(a.begin(), a.end(), cmp);

        for(int j = 0; j < n; j++)
        {
            int zero = 0;
            while(a[j][zero] == '0') zero++;
            cout << a[j].substr(zero, maxdig-zero);
            if(j+1 != n) cout << " "; 
        }

        dignow++;
        cout << nln;
    }
    

    return 0;
}