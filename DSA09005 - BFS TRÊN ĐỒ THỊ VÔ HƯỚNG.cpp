#include <bits/stdc++.h>
using namespace std;
int a[1005][1005];
int main() {
    int t; cin >> t;
    while (t--) {
        int n, m, u, c, d;
        cin >> n >> m >> u;
        for (int i = 1; i <= n; i++) for (int j = 1; j <= n; j++) a[i][j] = 0; 
        for (int i = 1; i <= m; i++) {
            cin >> c >> d;
            a[c][d] = 1;
            a[d][c] = 1;
        }
        int chuaxet[1005] = {0};
        chuaxet[u] = 1;
        queue<int> hangdoi;
        cout << u;
        hangdoi.push(u);
        while (!hangdoi.empty()) {
            int s = hangdoi.front();
            hangdoi.pop();
            for (int i = 1; i <= n; i++) {
                if (a[s][i] == 1 && chuaxet[i] == 0) {
                    cout << " " << i;
                    chuaxet[i] = 1;
                    hangdoi.push(i);
                }
            }
        }
        cout << endl;
    }
}