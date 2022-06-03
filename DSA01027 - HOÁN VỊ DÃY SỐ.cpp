#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    int a[n], b[n + 1];
    for (int i = 1; i <= n; i++) cin >> b[i];
    sort(b + 1, b + 1 + n);
    for (int i = 0; i < n; i++) a[i] = i + 1;
    while (1) {
        int l, k, check = 0;
        for (int i = 0; i < n; ++i) {
            cout << b[a[i]] << " ";
            
        }cout << endl;
        for (k = n - 2; k >= 0; --k) if (a[k] < a[k + 1]) break;
        if (k < 0) break;
        for (l = n - 1; l > k; --l) if (a[k] < a[l]) break;
        swap(a[k], a[l]);
        for (int i = k + 1, j = n - 1; j > i; --j, ++i) swap(a[i], a[j]);
    }
}