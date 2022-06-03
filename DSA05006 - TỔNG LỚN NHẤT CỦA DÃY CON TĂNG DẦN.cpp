#include <bits/stdc++.h>
using namespace std;
int m = 1e9 + 7;
int qhd(int a[], int n) {
    int i, j, f[1005], kq = 0;
    for (int i = 0; i < n; i++) {
        f[i] = a[i];
        for (int j = 0; j < i; j++) {
            if (a[j] < a[i]) {
                f[i] = max(f[i], f[j] + a[i]);
            }
        }
        kq = max(kq, f[i]);
    }
    return kq;
}
int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        cout << qhd(a, n) << endl;
    }
}