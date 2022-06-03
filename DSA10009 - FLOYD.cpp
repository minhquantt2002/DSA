#include <bits/stdc++.h>
using namespace std;
int a[1005][1005] , n, m, d[1005][1005], MAX = 1e9;
int main() {
	cin >> n >> m;
    memset(a, 0, sizeof(a));
	for (int i = 1; i <= m; i++) {
		int u, v, w; cin >> u >> v >> w;
        a[u][v] = a[v][u] = w;
	} 
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (a[i][j] == 0 && i != j) a[i][j] = MAX;
            d[i][j] = a[i][j];
        }
    }
	for (int k = 1; k <= n; k++) 
		for (int i = 1; i <= n; i++) 
			for (int j = 1; j <= n; j++) 
				if (d[i][j] > d[i][k] + d[k][j]) d[i][j] = d[i][k] + d[k][j];
    int q; cin >> q;
    while (q--) {
        int x, y; cin >> x >> y;
        cout << d[x][y] << endl;
    }
}
