#include <bits/stdc++.h>
using namespace std;
long long a[1000005], b[1000005], c[1000005];
int main() {
    int t; cin >> t;
    while (t--) {
        int n, m, k, ok = 0; cin >> n >> k;
        for (int i = 0; i < n; i++) cin >> a[i];
        sort(a, a + n);
        for (int i = 0; i < n - 2; i++) {
            for (int j = i + 1; j < n - 1; j++) {
                if (binary_search(a + j + 1, a + n, k - a[i] - a[j])) {
                    ok = 1;
                    break;
                }
            }
            if (ok == 1) break;
        }
        if (ok == 1) cout << "YES\n";
        else cout << "NO\n";
    }
}