#include <bits/stdc++.h>
using namespace std;


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

    int getCount() {
        return comp;
    }

    bool isSame(int u, int v) {
        return find(u) == find(v);
    }

};
