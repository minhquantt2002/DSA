#include <bits/stdc++.h>
using namespace std;
int n, m;
vector<int> ds[10005];
int vs[10005];
void DFS(int u) {
    vs[u] = 1;
    for (int v : ds[u]) 
        if (vs[v] == 0) DFS(v);
}
int main() {
    int t; cin >> t;
    while (t--) {
        cin >> n >> m;
        for (int i = 0; i < 10005; i++) ds[i].clear();
        for (int i = 1; i <= m; i++) {
            int u, v; cin >> u >> v;
            ds[u].push_back(v);
            ds[v].push_back(u);
        }
        memset(vs, 0, sizeof(vs));
        DFS(1);
        int ok = 1;
        for (int i = 2; i <= n && ok == 1; i++) if (vs[i] == 0) ok = 0;
        cout << (ok == 1 ? "YES\n" : "NO\n");
    }
}