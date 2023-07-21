// Problem: Multiples of 3 (https://www.spoj.com/problems/MULTQ3/)

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define nln "\n"
#define caseout(n) cout << "Case " << n << ": "


const ll MOD = 1e9+7;
const int MAX = 1e5+1;


pair<ll,ll> tree[4*MAX];
ll lazy[4*MAX];

void build(int b, int e, int v=1)
{
    if(b == e)
    {
        tree[v].first = 1;
        return;
    }
    
    int mid = (b+e)/2;
    build(b, mid, 2*v);
    build(mid+1, e,2*v+1);
    tree[v].first = tree[2*v].first + tree[2*v+1].first;
}

ll query(int l, int r, int b, int e, int v=1, ll carry = 0)
{
    if(b > r || e < l) return 0;
    if(b >= l && e <= r)
    {
        ll fr = tree[v].first, sc = tree[v].second;
        if(carry == 2) return sc;
        else if(carry == 1) return (e-b+1) - (fr+sc);
        else return fr;
    }
    
    int mid = (b+e)/2;
    carry = (carry+lazy[v])%3;
    ll lseg = query(l, r, b, mid, 2*v, carry);
    ll rseg = query(l, r, mid+1, e, 2*v+1, carry);
    return lseg + rseg;
}

void add_one(int total, int v)
{
    ll fr = tree[v].first, sc = tree[v].second;

    tree[v].first = total - (fr+sc);
    tree[v].second = fr;
}

void add_two(int total, int v)
{
    ll fr = tree[v].first, sc = tree[v].second;

    tree[v].second = total - (fr+sc);
    tree[v].first = sc;
}

void update(int l, int r, int b, int e, int v = 1)
{
    if(b > r || e < l) return;
    if(b >= l && e <= r)
    {
        add_one(e-b+1, v);
        lazy[v] = (lazy[v]+1)%3; 
        return;
    }
    
    int mid = (b+e)/2;
    update(l, r, b, mid, 2*v);
    update(l, r, mid+1, e, 2*v+1);
    tree[v].first = tree[2*v].first + tree[2*v+1].first;
    tree[v].second = tree[2*v].second + tree[2*v+1].second;

    if(lazy[v] == 1) add_one(e-b+1, v);
    else if(lazy[v] == 2) add_two(e-b+1, v);
}


void solve(int tcase)
{
    ll  n;
    cin >> n;

    ll m;
    cin >> m;


    // vector <ll> a(n);
    // for(int i= 0; i < n; i++) cin >> a[i];

    build(1, n);
    while(m--)
    {
        ll typ, l, r;
        cin >> typ >> l >> r;
        l++, r++;
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