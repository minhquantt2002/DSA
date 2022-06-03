#include<bits/stdc++.h>
using namespace std;
vector<int> ds[1005];
int MAX = INT_MAX, ok, vs[1005], n;
typedef pair<int, int> pp;
vector<pp> res;
void dfs(int u) {
    vs[u] = 1;
    for (int i : ds[u]) {
        if (vs[i] == 0) {
            res.push_back({u, i});
            dfs(i);
        }
    }
}
int main(){
    int te; cin >> te;
    while (te--) {
        int m, u; cin >> n >> m >> u;
        for (int i = 0; i < 1005; i++) ds[i].clear();
        while (m--) {
            int x, y; cin >> x >> y;
            ds[x].push_back(y);
            ds[y].push_back(x);
        }
        res.clear();
        memset(vs, 0, sizeof(vs));
        dfs(u);
        if (res.size() < n - 1) cout << -1 << endl;
        else {
            for (auto i : res) {
                cout << i.first << " " << i.second << endl;
            }
        }
    } 
}