#include <bits/stdc++.h>
using namespace std;
int w[1005], a[105][25005], n, v;
int main() {
    // int t; cin >> t;
    // while (t--) {
        int n, v; cin >> v >> n;
        memset(a, 0, sizeof(a));
        for (int i = 1; i <= n; i++) cin >> w[i];
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= v; j++) {
                a[i][j] = a[i - 1][j];
                if (w[i] <= j) {
                    a[i][j] = max(a[i][j], a[i - 1][j - w[i]] + w[i]);
                }
            }
        }
        cout << a[n][v];
    // }
}