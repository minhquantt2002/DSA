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
        int check[n + n] = {}, c = 0;         
        for (int v = 1; v <= n; v++) {
            if (check[v] == 0) {
                c++;
                queue<int> q;
                check[v] = 1;
                q.push(v);
                while (!q.empty()) {
                    int s = q.front(); q.pop();
                    for (int i : ds[s]) {
                        if (check[i] == 0) {
                            q.push(i);
                            check[i] = 1;
                        }
                    }
                }
            }  
        }
        cout << c << endl;
    }
}