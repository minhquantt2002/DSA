#include<bits/stdc++.h>
using namespace std;
struct edge {
    int u, v, w;
};

vector<edge> ds;
int main(){
	int t; cin >> t;
	while (t--) {
		int n, m; cin >> n >> m;
        ds.clear();
		for (int i = 1; i <= m; i++) {
            int u, v , w;
			cin >> u >> v >> w; 
            ds.push_back({u, v, w});
		}
        int d[n + 1];
        for (int i = 0; i < n; i++) d[i] = INT_MAX;
        d[0] = 0;
        for (int i = 1; i < n; i++) {
            for (int j = 0; j < m; j++) {
                int u = ds[j].u;
                int v = ds[j].v;
                int w = ds[j].w;
                if (d[u] != INT_MAX && d[v] > d[u] + w) d[v] = d[u] + w;
            }
        }
        int ok = 0;
        for (int j = 0; j < m; j++) {
            int u = ds[j].u;
            int v = ds[j].v;
            int w = ds[j].w;
            if (d[u] != INT_MAX && d[v] > d[u] + w) {
                ok = 1;
                break;
            }
        }
        cout << (ok == 1 ? "1\n" : "0\n");
	}
}
