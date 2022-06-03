#include<bits/stdc++.h>
using namespace std;
vector<int> ds[10005];
int main() {
	int t; cin >> t;
    while (t--) {
        int n, m, k; cin >> n >> m >> k;
        for (int i = 1; i <= m; i++) ds[i].clear();
        for (int i = 1; i <= m; i++) {
            int u, v; cin >> u >> v;
            ds[u].push_back(v);
        }
        stack<int> st;
        int check[n + 1] = {};
        check[k] = 1;
        st.push(k); 
        cout << k << " ";
        while (!st.empty()) {
            int s = st.top(); st.pop();
            for (int i : ds[s]) {
                if (check[i] == 0) {
                    cout << i << " ";
                    st.push(s);
                    st.push(i);
                    check[i] = 1;
                    break;
                }
            }
        }
        cout << endl;
    }
}