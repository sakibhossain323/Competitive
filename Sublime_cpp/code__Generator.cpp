#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define nln "\n"


const ll MOD = 1e9+7;
const int MAX = 2e5+1;


const ll MAX2 = 3e5;
const ll MAX3 = 1e9;
const ll MAX4 = 1e15;
const ll MAX5 = 1e17+5;
mt19937_64 rng(std::chrono::steady_clock::now().time_since_epoch().count());

int rand(ll a, ll b, std::mt19937_64* param_rng = nullptr) {
    if (param_rng == nullptr) {
        param_rng = &rng;
    }
    std::uniform_int_distribution<int> dist(a, b);
    return dist(*param_rng);
}

class DSU {
private:
    int comp;
    vector<int> par, rank, size;
public:
    DSU(int n) {
        comp = n;
        par.resize(n+1);
        for(int i = 1; i<=n; i++) par[i] = i;
        rank.assign(n+1, 0);
        size.assign(n+1, 1);
    }

    int find(int u) {
        if(u == par[u]) return u;
        return par[u] = find(par[u]);
    }

    int merge(int u, int v) {
        u = find(u);
        v = find(v);
        if(u == v) return -1;
        comp--;
        if(rank[u] > rank[v]) swap(u, v);
        if(rank[u] == rank[v]) rank[v]++;
        size[v]+=size[u];
        par[u] = v;
        return v;
    }

    int getSize(int u) {
        return size[find(u)];
    }

    int getComp() {
        return comp;
    }

    bool isSame(int u, int v) {
        return find(u) == find(v);
    }

};

signed main()
{
    ll seed;
    cin >> seed;
    srand(seed);


    cout << 1 << nln; // testcase

    const int nbig = 1e4;
    const int nsml = 10;
    const int kbig = 1e9;
    const int ksml = 100;

    ll n = rand(2, 10);
    
    ll r = rand(2, n);
    ll l = rand(1, r-1);
    cout << n << ' ' << l << ' ' << r << '\n'; 
    
    

    


    return 0;
}