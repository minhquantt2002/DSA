#include<bits/stdc++.h>
using namespace std;
vector<int> ds[10005];
int x[10005];
void dfs(int u) {
    x[u] = 1;
    for (int i : ds[u]) {
        if (x[i] == 0) dfs(i);
    }
}
int main() {
	int t; cin >> t;
    while (t--) {
        int n, m; cin >> n >> m;
        for (int i = 1; i <= n; i++) ds[i].clear();
        for (int i = 1; i <= m; i++) {
            int u, v; cin >> u >> v;
            ds[u].push_back(v);
        }
        int ok = 1;
        for (int i = 1; i <= n; i++) {
            memset(x, 0, sizeof(x));
            dfs(i);
            for (int j = 1; j <= n; j++) {
                if (x[j] == 0) {
                    ok = 0;
                    break;
                }
            }
        }
        cout << ((ok)? "YES\n" : "NO\n");
    }
}