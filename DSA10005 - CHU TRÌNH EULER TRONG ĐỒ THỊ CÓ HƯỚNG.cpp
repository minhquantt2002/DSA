#include<bits/stdc++.h>
using namespace std;
vector<int> ds[10005];
int a[1005][1005];
int main(){
    int t, n, c, ok;
    cin >> t;
    while(t--){
        int n, m; cin >> n >> m;
        memset(a, 0, sizeof(a));
        for (int i = 1; i <= m; i++) {
            int u, v; cin >> u >> v;
            a[u][v] = 1;
        }
        int x = 0, y = 0;
        for (int i = 1; i <= n; i++) {
            int h = 0, c = 0;
            for (int j = 1; j <= n; j++) {
                c += a[j][i];
                h += a[i][j];
            }
            if (h == c) x++;
        }
        cout << ((x == n) ? "1\n" : "0\n");
    }
}