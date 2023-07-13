// Problem: Horrible Queries (https://www.spoj.com/problems/HORRIBLE/)

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define nln "\n"
#define caseout(n) cout << "Case " << n << ": "


const ll MOD = 1e9+7;
const int MAX = 2e5+1;


ll tree[4*MAX], lazy[4*MAX];

ll query(int l, int r, int b, int e, int v=1, ll carry = 0)
{
    if(b > r || e < l) return 0;
    if(b >= l && e <= r) return tree[v]+carry*(e-b+1);

    int mid = (b+e)/2;
    ll lseg = query(l, r, b, mid, 2*v, carry+lazy[v]);
    ll rseg = query(l, r, mid+1, e, 2*v+1, carry+lazy[v]);
    return lseg + rseg;
}

void update(int l, int r, ll val, int b, int e, int v = 1)
{
    if(b > r || e < l) return;
    if(b >= l && e <= r)
    {
        tree[v]+= (e-b+1)*val;
        lazy[v]+= val;
        return;
    }

    int mid = (b+e)/2;
    update(l, r, val, b, mid, 2*v);
    update(l, r, val, mid+1, e, 2*v+1);
    tree[v] = tree[2*v] + tree[2*v+1]+ (e-b+1)*lazy[v];
}

void clear(int b, int e, int v=1)
{
    if(b == e)
    {
        tree[v] = 0, lazy[v] = 0;
        return;
    }
    
    int mid = (b+e)/2;
    clear(b, mid, 2*v);
    clear(mid+1, e,2*v+1);
    tree[v] = 0, lazy[v] = 0;
}


void solve(int tcase)
{
    ll  n;
    cin >> n;

    ll q;
    cin >> q;


    // vector <ll> a(n);
    // for(int i= 0; i < n; i++) cin >> a[i];

    
    while(q--)
    {
        ll typ, l, r;
        cin >> typ >> l >> r;
        if(typ) cout << query(l, r, 1, n) << nln;
        else
        {
            ll val;
            cin >> val;
            update(l, r, val, 1, n);
        }
        
    }
    clear(1, n);

    // cout << nln;
    
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
    cin >> t;
    for(int tcase = 1; tcase <= t; tcase++) solve(tcase);

    return 0;
}