#include <bits/stdc++.h>
using namespace std;
int main() {
    int t; cin >> t;
    while (t--) {
        long long n, count = 0; cin >> n;
        long long k = 1e9, a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        sort(a, a + n);
        for (int i = 0; i < n - 1; i++) {
            k = min(k, a[i + 1] - a[i]);
        }
        cout << k << endl;
    }
}