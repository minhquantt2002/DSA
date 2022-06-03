#include<bits/stdc++.h>
using namespace std;
vector<int> ds[10005];
int ok, check[10005];
void bfs(int u) {
    int truoc[10005] = {};
    queue<int> q;
    q.push(u);
    check[u] = 1;
    while (!q.empty()) {
        int s = q.front(); q.pop();
        for (int k : ds[s]) {
            if (check[k] == 1 && truoc[s] != k) {
                ok = 1;
                return;
            }
            if (check[k] == 0) {
                q.push(k);
                check[k] = 1;
                truoc[k] = s;
            }
        } 
    }
}
int main(){
    int t; cin >> t;
    while(t--) {
        int n, m; cin >> n;
        for (int i = 0; i < 1005; i++) ds[i].clear();
        for (int i = 1; i < n; i++) {
            int u, v; cin >> u >> v;
            ds[u].push_back(v);
            ds[v].push_back(u);
        }
        memset(check, 0, sizeof(check));
        ok = 0;
        for (int i = 1; i <= n; i++) {
            if (check[i] == 0) {
                bfs(i);
                if (ok == 1) break;
            }
        }
        if (ok == 1) cout << "NO\n";
        else cout << "YES\n";
    }
}
