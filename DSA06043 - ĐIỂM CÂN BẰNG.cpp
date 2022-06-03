#include <bits/stdc++.h>
using namespace std;
int main() {
    int t; cin >> t;
    while (t--) {
        long long n, tong = 0, s = 0; cin >> n;
        long long k = -1, a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            tong += a[i];
        }
        tong -= a[0];
        for (int i = 0; i < n - 1; i++) {
            if (tong == s) {
                k = i + 1;
                break;
            }
            tong -= a[i + 1];
            s += a[i];
        }
        cout << k << endl;
    }
}