#include<bits/stdc++.h>
using namespace std;
vector<int> ds[10005];
int ok, check[10005], n;
void dfs(int u) {
    check[u] = 1;
    for (int i : ds[u]) {
        if (check[i] == 0) {
            dfs(i);
        } else if (check[i] == 1) {
            ok = 1;
            return;
        }
    }
    check[u] = 2;
}
int main(){
    int t; cin >> t;
    while(t--) {
        int m; cin >> n >> m;
        for (int i = 0; i < 1005; i++) ds[i].clear();
        for (int i = 1; i <= m; i++) {
            int u, v; cin >> u >> v;
            ds[u].push_back(v);
        }
        memset(check, 0, sizeof(check));
        ok = 0;
        for (int i = 1; i <= n; i++) {
            if (check[i] == 0) {
                dfs(i);
                if (ok == 1) break;
            }
        }
        if (ok == 0) cout << "NO\n";
        else cout << "YES\n";
    }
}