#include <bits/stdc++.h>
using namespace std;
int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int a[n], pos = 0, b[n];
        for (int i = 0; i < n; i++) cin >> b[i];
        for (int i = 0; i < n; i++) a[i] = i + 1;
        while (1) {
            int l, k, check = 0;
            pos++;
            for (int i = 0; i < n; ++i) if (a[i] == b[i]) check++;
            if (check == n) break;;
            for (k = n - 2; k >= 0; --k) if (a[k] < a[k + 1]) break;
            if (k < 0) break;
            for (l = n - 1; l > k; --l) if (a[k] < a[l]) break;
            swap(a[k], a[l]);
            for (int i = k + 1, j = n - 1; j > i; --j, ++i) swap(a[i], a[j]);
        }
        cout << pos << endl;
    }
}