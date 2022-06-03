#include<bits/stdc++.h>
using namespace std;
vector<pair<int, int>> ds[1005];
int MAX = INT_MAX;
typedef pair<int, int> pp;
int main(){
    int te; cin >> te;
    while (te--) {
        int n, ca, s; cin >> n >> ca >> s;
        for (int i = 0; i < 1005; i++) ds[i].clear();
        int d[1005] = {};
        for (int i = 1; i <= n; i++) d[i] = MAX;
        d[s] = 0;
        for (int i = 1; i <= ca; i++) {
            int u, v, ts; cin >> u >> v >> ts;
            ds[u].push_back({v, ts});
            ds[v].push_back({u, ts});
        }
        priority_queue<pp, vector<pp>, greater<pp>> q;
        q.push({0, s});
        while (!q.empty()) {
            pp top = q.top(); q.pop();
            int fi = top.first;
            int se = top.second;
            if (fi > d[se]) continue;
            for (auto it : ds[se]) {
                int w = it.second;
                int v = it.first;
                if (d[v] > d[se] + w) {
                    d[v] = d[se] + w;
                    q.push({d[v], v});
                }
            }
        }
        for (int i = 1; i <= n; i++) cout << d[i] << " ";
        cout << endl;
    } 
}
