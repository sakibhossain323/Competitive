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
    tree[v] = tree[2*v] + tree[2*v+1];
}

ll query(int l, int r, int b, int e, int v=1)
{
    if(b > r || e < l) return 0;
    if(b >= l && e <= r) return tree[v];

    int mid = (b+e)/2;
    ll lseg = query(l, r, b, mid, 2*v);
    ll rseg = query(l, r, mid+1, e, 2*v+1);
    return lseg + rseg;
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
    tree[v] = tree[2*v] + tree[2*v+1];
}



signed main ()
{
    

    return 0;
}