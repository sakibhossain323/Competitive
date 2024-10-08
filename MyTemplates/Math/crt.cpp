#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
template <typename DT> 
using ordered_set = tree <DT, null_type, less<DT>, rb_tree_tag, tree_order_statistics_node_update>;
using ll = long long;


const ll MOD = 1e9+7;
const ll INF = 1e18;
const int MAX = 1e5+5;


tuple<ll, ll, ll> egcd(ll a, ll  b)
{
    if(b==0) return {1, 0, a};
    auto [x1, y1, g] = egcd(b, a%b);
    ll x = y1, y = x1-y1*(a/b);
    return {x, y, g};
}

pair<ll, ll> crt(vector<pair<ll, ll>> &v)
{
    ll x = 0, m = 1;
    for(auto &[ai, mi]: v)
    {
        auto [p, q, g] = egcd(m, mi);
        if((ai-x)%g !=0) return {-1, 0};
        x+= p*(ai-x)/g  %(mi/g)*m;
        m*= mi/g;
        x = (x%m + m) % m;
    }
    return {x, m};
}