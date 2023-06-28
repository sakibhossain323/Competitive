#include <bits/stdc++.h>
using namespace std;


using ll = long long;
#define caseout(n) cout << "Case " << n << ": "
#define nln "\n"

#define MOD 1000000007
#define MAX 1000001


int digsum(int n)
{
    int sum =  0;
    while(n)
    {
        sum+= n%10;
        n/=10;
    }
    return sum;
}

void solve(int tcase)
{
    int n, q;
    cin >> n >> q;
    
    vector <int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    vector <int> updated(n);
    set <int> updatable;
    for(int i = 0; i < n; i++) updatable.insert(i);

    while(q--)
    {
        int typ;
        cin >> typ;
        if(typ == 1)
        {
            int l, r;
            cin >> l >> r;

            auto ptr = updatable.lower_bound(l-1);
            while(ptr != updatable.end())
            {
                if(*ptr >= r) break;
                a[*ptr] = digsum(a[*ptr]);
                updated[*ptr]++;
                auto prv = ptr;
                ptr = next(ptr);
                if(updated[*prv] > 2) updatable.erase(prv);
            }
        }
        else
        {
            int x;
            cin >> x;
            cout << a[x-1] << nln;
        }
    }
      
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