#include <bits/stdc++.h>
using namespace std;
vector<int> List[1005];
int main() {
    int t; cin >> t;
    while (t--) {
        int n, m;
        for (int i = 0; i < 1005; i++) List[i].clear();
        cin >> n >> m;
        for (int i = 1; i <= m; i++) {
            int u, v; cin >> u >> v;
            List[u].push_back(v);
            List[v].push_back(u);
        }
        for (int i = 1; i <= n; i++) {
            cout << i << ": ";
            for (int j = 0; j < List[i].size(); j++) {
                cout << List[i][j] << " ";
            }
            cout << endl;
        }
    }
}