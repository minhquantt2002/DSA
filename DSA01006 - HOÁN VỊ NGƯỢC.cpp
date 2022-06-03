#include <bits/stdc++.h>
using namespace std;
int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int a[n];
        for (int i = 0; i < n; ++i) a[i] = n - i;
        while (1) {
            for (int i = 0; i < n; ++i) cout << a[i];
            cout << " ";
            int l, k;
            for (k = n - 2; k >= 0; --k) if (a[k] > a[k + 1]) break;
            if (k < 0) break;
            for (l = n - 1; l > k; --l) if (a[k] > a[l]) break;
            swap(a[k], a[l]);
            for (int i = k + 1, j = n - 1; j > i; --j, ++i) swap(a[i], a[j]);
        }
        cout << endl;
    }
}
//3 2 1