#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
template <typename DT> 
using ordered_set = tree <DT, null_type, less<DT>, rb_tree_tag, tree_order_statistics_node_update>;
using ll = long long;


#define tcout(i) cout << "Case " << i << ": "
const ll MOD = 1e9+7;
const ll INF = 1e18;
const int MAX = 1e6+5;




void solve(int tc)
{   
    ll n; cin >> n;
    tcout(tc) << n*n;
    



    cout << '\n';
}


signed main()
{
    cin.tie(0)->sync_with_stdio(0);





    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++) solve(i);

    return 0;
}