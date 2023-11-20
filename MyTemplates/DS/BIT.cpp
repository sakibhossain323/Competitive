#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define caseout(n) cout << "Case " << n << ": "

const ll MOD = 1e9+7;//998244353;
const ll INF = 1e18;
const int MAX =1e5+5;


template <typename T> class BIT 
{
    public:
        int n; vector<T> tree;

        BIT(int size) // 1-indexed
        {
            n = size; tree.assign(n+1, 0);
        }

        BIT(const vector<T> &a) : BIT(a.size())
        {
            for(int i = 1; i <= n; i++) update(i, a[i-1]);
        }

        T query(int i)
        {
            T ans = 0;
            for( ; i >= 1; i-= (i & -i)) ans+= tree[i];
            return ans;
        }

        T query(int l, int r)
        {
            return query(r) - query(l-1);
        }

        void update(int i, T delta)
        {
            for( ; i <= n; i+= (i & -i)) tree[i]+= delta;
        }
};


int main ()
{
    
    
    return 0;
}