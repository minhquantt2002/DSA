#include <bits/stdc++.h>
using namespace std;
int n, m;
vector<int> ds[100005];
int vs[100005], res;
void DFS(int u) {
    int l  = 1;
    queue<int> q;
    q.push(u);
    vs[u] = 1;
    while (!q.empty()) {
        int s = q.front(); q.pop();
        for (int i : ds[s]) {
            if (vs[i] == 0) {
                l++;
                q.push(i);
                vs[i] = 1;
            }
        }
    }
    res = max(res, l);
}
int main() {
    int t; cin >> t;
    while (t--) {
        cin >> n >> m;
        for (int i = 0; i < 100005; i++) ds[i].clear();
        for (int i = 1; i <= m; i++) {
            int u, v; cin >> u >> v;
            ds[u].push_back(v);
            ds[v].push_back(u);
        }
        memset(vs, 0, sizeof(vs));
        res = 0;
        for (int i = 1; i <= n; i++) 
            if (vs[i] == 0) DFS(i);
        cout << res << endl;
    }
}