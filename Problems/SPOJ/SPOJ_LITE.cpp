// Problem: Light Switching (https://www.spoj.com/problems/LITE/)

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define nln "\n"
#define caseout(n) cout << "Case " << n << ": "


const ll MOD = 1e9+7;
const int MAX = 1e5+1;


ll tree[4*MAX], lazy[4*MAX];

ll query(int l, int r, int b, int e, int v=1, ll carry = 0)
{
    if(b > r || e < l) return 0;
    if(b >= l && e <= r)
    {
        if(carry) return (e-b+1) - tree[v];
        else return tree[v];
    }
    
    int mid = (b+e)/2;
    carry = (carry+lazy[v])%2;
    ll lseg = query(l, r, b, mid, 2*v, carry);
    ll rseg = query(l, r, mid+1, e, 2*v+1, carry);
    return lseg + rseg;
}

void update(int l, int r, int b, int e, int v = 1)
{
    if(b > r || e < l) return;
    if(b >= l && e <= r)
    {
        tree[v] = (e-b+1) - tree[v];
        lazy[v] = (lazy[v]+1)%2;
        return;
    }
    
    int mid = (b+e)/2;
    update(l, r, b, mid, 2*v);
    update(l, r, mid+1, e, 2*v+1);
    if(lazy[v]%2) tree[v] = (e-b+1) - (tree[2*v] + tree[2*v+1]);
    else tree[v] = tree[2*v] + tree[2*v+1];
}


void solve(int tcase)
{
    ll  n;
    cin >> n;

    ll m;
    cin >> m;


    // vector <ll> a(n);
    // for(int i= 0; i < n; i++) cin >> a[i];

    
    while(m--)
    {
        ll typ, l, r;
        cin >> typ >> l >> r;
        
        if(typ) cout << query(l, r, 1, n) << nln;
        else update(l, r, 1, n);
    }


    cout << nln;
    
}



signed main()
{
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    //---------------------------------------------------
    
    
    
    //---------------------------------------------------

    int t = 1;
    // cin >> t;
    for(int tcase = 1; tcase <= t; tcase++) solve(tcase);

    return 0;
}