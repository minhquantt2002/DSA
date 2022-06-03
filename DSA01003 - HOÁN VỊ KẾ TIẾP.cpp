#include <bits/stdc++.h>
using namespace std;
int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int a[n + 1];
        for (int i = 0; i < n; ++i) cin >> a[i];
        int l, k;
        for (k = n - 2; k >= 0; --k) if (a[k] < a[k + 1]) break;
        if (k < 0) {
            for (int i = 1; i <= n; i++) cout << i << " ";
            cout << endl;
            continue; 
        }
        for (l = n - 1; l > k; --l) if (a[k] < a[l]) break;
        swap(a[k], a[l]);
        for (int i = k + 1, j = n - 1; j > i; --j, ++i) swap(a[i], a[j]);
        for (int i = 0; i < n; ++i) cout << a[i] << " ";
        cout << endl;
    }
}