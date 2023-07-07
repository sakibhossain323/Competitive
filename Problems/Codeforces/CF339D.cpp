// Problem: Xenia and Bit Operations (https://codeforces.com/contest/339/problem/D)
// Submission: https://codeforces.com/contest/339/submission/212123393

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define nln "\n"
#define caseout(n) cout << "Case " << n << ": "


const ll MOD = 1e9+7;
const int MAX = 2e5+1;


ll tree[4*MAX];

void build(vector<ll>&a, bool XOR, int b = 0, int e = -1, int v=1)
{
    if(e == -1) e = a.size()-1;

    if(b == e)
    {
        tree[v] = a[b];
        return;
    }
    
    int mid = (b+e)/2;
    build(a, !XOR, b, mid, 2*v);
    build(a, !XOR, mid+1, e,2*v+1);
    if(XOR) tree[v] = (tree[2*v] ^ tree[2*v+1]);
    else tree[v] = (tree[2*v] | tree[2*v+1]);
}

void update(int i, ll val, bool XOR, int b, int e, int v = 1)
{
    if(b > i || e < i) return;
    if(b == i && e == i)
    {
        tree[v] = val;
        return;
    }

    int mid = (b+e)/2;
    update(i, val, !XOR, b, mid, 2*v);
    update(i, val, !XOR, mid+1, e, 2*v+1);
    if(XOR) tree[v] = (tree[2*v] ^ tree[2*v+1]);
    else tree[v] = (tree[2*v] | tree[2*v+1]);
}


void solve(int tcase)
{
    ll  n;
    cin >> n;

    ll q;
    cin >> q;


    // vector <ll> a(n);
    // for(int i= 0; i < n; i++) cin >> a[i];

    vector <ll> a(1<<n);
    for(int i= 0; i < (1<< n); i++) cin >> a[i];
    bool XOR = n%2 ? false: true;
    build(a, XOR);
    while(q--)
    {
        ll p, b;
        cin >> p >> b;
        update(p, b, XOR, 1, 1<<n);
        cout << tree[1] << nln;
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