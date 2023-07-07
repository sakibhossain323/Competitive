// Problem: Dynamic Range Minimum Queries (https://cses.fi/problemset/task/1649/)

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define nln "\n"
#define caseout(n) cout << "Case " << n << ": "


const ll MOD = 1e9+7;
const int MAX = 2e5+1;


ll tree[4*MAX];

void build(vector<ll>&a, int b = 0, int e = -1, int v=1)
{
    if(e == -1) e = a.size()-1;

    if(b == e)
    {
        tree[v] = a[b];
        return;
    }
    
    int mid = (b+e)/2;
    build(a, b, mid, 2*v);
    build(a, mid+1, e,2*v+1);
    tree[v] = min(tree[2*v], tree[2*v+1]);
}

ll query(int l, int r, int b, int e, int v=1)
{
    if(b > r || e < l) return LLONG_MAX;
    if(b >= l && e <= r) return tree[v];

    int mid = (b+e)/2;
    ll lseg = query(l, r, b, mid, 2*v);
    ll rseg = query(l, r, mid+1, e, 2*v+1);
    return min(lseg, rseg);
}

void update(int i, ll val, int b, int e, int v = 1)
{
    if(b > i || e < i) return;
    if(b == i && e == i)
    {
        tree[v] = val;
        return;
    }

    int mid = (b+e)/2;
    update(i, val, b, mid, 2*v);
    update(i, val, mid+1, e, 2*v+1);
    tree[v] = min(tree[2*v], tree[2*v+1]);
}


void solve(int tcase)
{
    ll  n;
    cin >> n;

    ll q;
    cin >> q;


    vector <ll> a(n);
    for(int i= 0; i < n; i++) cin >> a[i];

    build(a);
    while(q--)
    {
        ll typ, a, b;
        cin >> typ >> a >> b;
        if(typ == 1) update(a, b, 1, n); 
        else cout << query(a, b, 1, n) << nln;
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