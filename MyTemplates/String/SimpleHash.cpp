#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
template <typename DT> 
using ordered_set = tree <DT, null_type, less<DT>, rb_tree_tag, tree_order_statistics_node_update>;
using ll = long long;


#define tcout(i) cout << "Case #" << i << ": "
const ll MOD = 1e9+7;
const ll INF = 1e18;
const int MAX = 2e5+5;


class Hash {
private:
    ll b = 26;
    vector<ll> p;
    vector<ll> h;
public:
    Hash(string &s)
    {
        ll n = s.size();
        p.resize(n+1, 1);
        h.resize(n+1);
        for(int i = 1; i <= n; i++)
        {
            p[i] = (p[i-1]*b)%MOD;
            h[i] = (h[i-1]*b)%MOD; 
            (h[i]+= s[i-1]-'a')%=MOD;
        }
    }

    ll getHash(ll l, ll r) // 1-indexed
    {
        ll val = h[r] - (h[l-1]*p[r-l+1])%MOD;
        (val+=MOD)%=MOD;
        return val;
    }
};