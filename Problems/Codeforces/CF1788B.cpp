#include <bits/stdc++.h>
using namespace std;


using ll = long long;
#define caseout(n) cout << "Case " << n << ": "
#define nln "\n"

#define MOD 1000000007
#define MAX 1000001

int str2int(string num)
{
    int base = 10;
    int n = 0;
    for(int i = 0; i < (int)num.length(); i++)
    {
        n*=base;
        n+= num[i]-'0';
    }

    return n;
}


void solve(int tcase)
{
    int n;
    cin >> n;
    
    // vector <int> a(n);
    // for(int i = 0; i < n; i++) cin >> a[i];

    string str = to_string(n);
    int len = str.length();
    string xstr, ystr;
    bool carry = false;
    for(int i = len-1; i >= 0; i--)
    {
        int dig = str[i] - '0';
        if(dig%2)
        {
            if(carry)
            {
                xstr.push_back(dig/2+'0');
                ystr.push_back(dig/2+'1');
                carry = false;
            }
            else
            {
                xstr.push_back(dig/2+'1');
                ystr.push_back(dig/2+'0');
                carry = true;
            }

        }   
        else
        {
            xstr.push_back(dig/2+'0');
            ystr.push_back(dig/2+'0');
        }
    }
    reverse(xstr.begin(), xstr.end());
    reverse(ystr.begin(), ystr.end());

    cout << str2int(xstr) << " " << str2int(ystr) << nln;

    

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