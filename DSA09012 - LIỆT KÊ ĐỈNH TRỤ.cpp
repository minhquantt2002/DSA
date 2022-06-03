#include<bits/stdc++.h>
using namespace std;
vector<int> ds[10005];
int main() {
	int t; cin >> t;
    while (t--) {
        int n, m; cin >> n >> m;
        for (int i = 1; i <= n; i++) ds[i].clear();
        for (int i = 1; i <= m; i++) {
            int u, v; cin >> u >> v;
            ds[u].push_back(v);
            ds[v].push_back(u);
        }
        for (int i = 1; i <= n; i++) {
            int check[n + 1] = {};
            stack<int> st;
            int x = 1;
            if (i == 1) x = 2;
            st.push(x);
            check[x] = 1;
            check[i] = 1;
            while (!st.empty()) {
                int s = st.top(); st.pop();
                for (int j : ds[s]) {
                    if (check[j] == 0 && j != i) {
                        st.push(s);
                        st.push(j);
                        check[j] = 1;
                        break;
                    }
                }
            }
            int ok = 0;
            for (int j = 1; j <= n; j++) {
                if (check[j] == 0) {
                    ok = 1;
                    break;
                }
            }
            if (ok == 1) cout << i << " ";
        }
        cout << endl;
    }
}