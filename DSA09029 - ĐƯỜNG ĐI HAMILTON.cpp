#include<bits/stdc++.h>
using namespace std;
vector<int> ds[1005];
int MAX = INT_MAX, ok, check[1005], n;
typedef pair<int, int> pp;
void hmt(int s, int c) {
    check[s] = 1;
    if (c == n) {
        ok = 1;
        return;
    }
    for (int i : ds[s]) {
        if (check[i] == 0) {
            hmt(i, c + 1);
            check[i] = 0;
        }
    }
}
int main(){
    int te; cin >> te;
    while (te--) {
        int m; cin >> n >> m;
        for (int i = 0; i < 1005; i++) ds[i].clear();
        while (m--) {
            int u, v; cin >> u >> v;
            ds[u].push_back(v);
            ds[v].push_back(u);
        }ok = 0;
        for (int i = 1; i <= n; i++) {
            memset(check, 0, sizeof(check));
            hmt(i, 1);
            if (ok == 1) break;
        }
                
        cout << (ok ? "1\n" : "0\n");
    } 
}
