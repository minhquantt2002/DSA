#include <bits/stdc++.h>
using namespace std;
vector<int> dsk[1005];
int main() {
    int t; cin >> t;
    while (t--) {
        int n, m; cin >> n >> m;
        for (int i = 0; i < 1005; i++) dsk[i].clear();
        for (int i = 1; i <= m; i++) {
            int u, v; cin >> u >> v;
            dsk[u].push_back(v);
            dsk[v].push_back(u);
        }
        
        int q; cin >> q;
        while (q--) {
            int x, y; cin >> x >> y;
            if (x > y) swap(x, y);
            stack<int> st;
            int daxet[1005] = {0}, ok = 0;
            st.push(x);
            daxet[x] = 1;
            while (!st.empty()) {
                int s = st.top(); st.pop();
                for (int v : dsk[s]) {
                    if (daxet[v] == 0) {
                        st.push(s);
                        st.push(v);
                        daxet[v] = 1;
                        if (v == y) ok = 1;
                        break;
                    }
                }
                if (ok == 1) break;
            }
            if (ok) cout << "YES\n";
            else cout << "NO\n";
        }
    }
}