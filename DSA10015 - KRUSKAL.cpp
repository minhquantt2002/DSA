#include <bits/stdc++.h> 
using namespace std;
struct node {
    int u, v, w;
};
vector<node> ds, res, ct;
vector<int> kt[1005];
bool ss(node a, node b) {
    return a.w > b.w;
}
int ktra(node s) {
    res.push_back(s);
    int truoc[1005] = {}, vs[1005] = {};
    for (int i = 0; i < 1005; i++) kt[i].clear();
    for (node i : res)  {
        kt[i.u].push_back(i.v);
        kt[i.v].push_back(i.u);
    }
    queue<int> q;
    q.push(s.u);
    vs[s.u] = 1;
    while (!q.empty()) {
        int s = q.front(); q.pop();
        for (int k : kt[s]) {
            if (vs[k] == 1 && truoc[s] != k) {
                if (!res.empty()) res.pop_back();
                return 0;
            }
            if (vs[k] == 0) {
                q.push(k);
                vs[k] = 1;
                truoc[k] = s;
            }
        } 
    }
    return 1;
}
int main() {
    int t; cin >> t;
    while (t--) {
        int n, m; cin >> n >> m;
        ds.clear(); res.clear();
        while (m--) {
            int u, v, k; cin >> u >> v >> k;
            ds.push_back({u, v, k});
        }
        int d = 0;
        sort(ds.begin(), ds.end(), ss);
        int vs[1005] = {};
        while (res.size() < n - 1) {
            node s = ds[ds.size() - 1];
            if (!ds.empty()) ds.pop_back();
            if (ktra(s)) d += s.w;
        }
        if (res.size() >= n - 1) cout << d << endl;
        // else cout << "REAL VO DICH C1";
    }
}