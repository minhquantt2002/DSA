#include<bits/stdc++.h>
using namespace std;
vector<int> ds[1005];
int check[1005] = {};
void DFS(int x, int a, int b) {
    for (int i : ds[x]) {
        if (x == a && i == b) continue;
        if (x == b && i == a) continue;
        if (check[i] == 0) {
            check[i] = 1;
            DFS(i, a, b);
        }
    }
}
int main() {
	int t; cin >> t;
    while (t--) {
        int n, m; cin >> n >> m;
        for (int i = 1; i <= m; i++) ds[i].clear();
        for (int i = 1; i <= m; i++) {
            int u, v; cin >> u >> v;
            ds[u].push_back(v);
            ds[v].push_back(u);
        }
        DFS(1, 0, 0);
        int c = 1, chuaxet[1005] = {};
        for (int i = 1; i <= n; i++) if (check[i] == 0) c++;
        for (int i = 1; i <= n; i++) {
            for (int j : ds[i]) {
                memset(check, 0, sizeof(check));
                if (chuaxet[i] == 1 && chuaxet[j] == 1) continue;
                DFS(1, j, i);
                int dem = 1;
                for (int k = 1; k <= n; k++){ 
                    if (check[k] == 0) {
                        cout << i << " " << j << " ";
                        chuaxet[i] = chuaxet[j] = 1;
                        break;
                    }
                }
            }
        }
        cout << endl;
    }
}