#include <bits/stdc++.h>
using namespace std;
int w[1005], c[1005], a[1005][1005], n, v;
int main() {
    int t; cin >> t;
    while (t--) {
        int n, v; cin >> n >> v;
        memset(a, 0, sizeof(a));
        for (int i = 1; i <= n; i++) cin >> w[i];
        for (int i = 1; i <= n; i++) cin >> c[i];
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= v; j++) {
                a[i][j] = a[i - 1][j];
                if (w[i] <= j) {
                    a[i][j] = max(a[i][j], a[i - 1][j - w[i]] + c[i]);
                }
            }
        }
        cout << a[n][v] << endl;
    }
}