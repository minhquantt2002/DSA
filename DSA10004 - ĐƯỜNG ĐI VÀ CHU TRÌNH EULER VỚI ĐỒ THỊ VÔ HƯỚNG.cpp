#include<bits/stdc++.h>
using namespace std;
vector<int> ds[10005];
int main(){
    int t, n, c, ok;
    cin >> t;
    while(t--){
        int n, m; cin >> n >> m;
        for (int i = 1; i <= n + n; i++) ds[i].clear();
        for (int i = 1; i <= m; i++) {
            int u, v; cin >> u >> v;
            ds[u].push_back(v);
            ds[v].push_back(u);
        }
        int c = 0, d = 0;
        for (int i = 1; i <= n; i++) {
            if (ds[i].size() % 2 == 0) c++;
            else d++;
        }
        if (c == n) {
            cout << 2 << endl;
        } else if (d == 2 && c == n - 2) {
            cout << 1 << endl;
        } else cout << 0 << endl;
    }
}