#include<bits/stdc++.h>
using namespace std;
int a[1005][1005];
vector<int> ds[1005];
int main() {
    int t; cin >> t;
    while (t--) {
        int n, m; cin >> n >> m;
        for (int i = 0; i < 1005; i++) ds[i].clear();
        for (int i = 1; i <= m; i++) {
            int u, v; cin >> u >> v;
            ds[u].push_back(v);
        }
        for (int i = 1; i <= n; i++) sort(ds[i].begin(), ds[i].end());
        for (int i = 1; i <= n; i++) {
            cout << i << ": ";
            for (int j : ds[i]) {
                cout << j << ' ';
            }
            cout << endl;
        }
    }
}