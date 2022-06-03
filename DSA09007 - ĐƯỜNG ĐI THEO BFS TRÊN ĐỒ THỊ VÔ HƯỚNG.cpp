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
            ds[v].push_back(u);
        }
        queue<int> q;
        int check[n + n] = {}, truoc[n + n] = {};
        check[dau] = 1;
        q.push(dau); 
        while (!q.empty()) {
            int s = q.front(); q.pop();
            for (int i : ds[s]) {
                if (check[i] == 0) {
                    q.push(i);
                    check[i] = 1;
                    truoc[i] = s;
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