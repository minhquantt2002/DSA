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
        int m, u; cin >> n >> m;
        for (int i = 0; i < 1005; i++) ds[i].clear();
        while (m--) {
            int x, y; cin >> x >> y;
            ds[x].push_back(y);
            ds[y].push_back(x);
        }
        for (int i = 1; i <= n; i++) sort(ds[i].begin(), ds[i].end());
        memset(vs, 0, sizeof(vs));
        int truoc[1005] = {};
        stack<int> st;
        st.push(1);
        vs[1] = 1;
        int t = 0;
        while (!st.empty() && t == 0) {
            int s = st.top(); st.pop();
            for (int i : ds[s]) {
                if (vs[i] == 0) {
                    st.push(s);
                    st.push(i);
                    vs[i] = 1;
                    truoc[i] = s;
                    break;
                } 
                if (i == 1 && truoc[s] != 1) {
                    t = s;
                    truoc[i] = s;
                    break;
                }
            }
        }
        if (t == 0) cout << "NO" << endl;
        else {
            stack<int> r; r.push(t);
            int k = t;
            while (k != 1) {
                k = truoc[k];
                r.push(k);
            }
            while (!r.empty()) {
                cout << r.top() << " ";
                r.pop();
            } 
            cout << 1 << endl;
        }
    } 
}
