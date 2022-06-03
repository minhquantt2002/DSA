#include<bits/stdc++.h>
using namespace std;
vector<int> ds[10005];
int main() {
	int t; cin >> t;
    while (t--) {
        int n, m, dau, cuoi; cin >> n >> m >> dau >> cuoi;
        for (int i = 1; i <= n; i++) ds[i].clear();
        for (int i = 1; i <= m; i++) {
            int u, v; cin >> u >> v;
            ds[u].push_back(v);
        }
        stack<int> st;
        int check[n + n] = {}, truoc[n + n] = {};
        check[dau] = 1;
        st.push(dau); 
        while (!st.empty()) {
            int s = st.top(); st.pop();
            if (s == cuoi) break;
            for (int i : ds[s]) {
                if (check[i] == 0) {
                    st.push(s);
                    st.push(i);
                    check[i] = 1;
                    truoc[i] = s;
                    break;
                }
            }
        }
        if (check[cuoi] == 0) {
            cout << "-1\n";
            continue;
        }
        stack<int> w;
        w.push(cuoi);
        int k = truoc[cuoi];
        while (k != dau) {
            w.push(k);
            k = truoc[k];
        }
        cout << dau << " ";
        while (!w.empty()) {
            cout << w.top() << " "; w.pop();
        }
        cout << endl;
    }
}