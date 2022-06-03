#include <bits/stdc++.h>
using namespace std;
int n, a[10001][1001], b[10001];
int main() {
    int t; cin >> t;
    while (t--) {
        cin >> n;
        for (int i = 0; i < n; i++) cin >> b[i];
        for (int j = 0;j < n; j++) {
            a[0][j] = b[j];
        }
        for (int i = 1; i < n; i++) {
            for (int j = 0; j < n - i; j++) {
                a[i][j] = a[i - 1][j] + a[i - 1][j + 1];
            }
        }
        for (int i = 0; i < n; i++) {
            cout << "[";
            for (int j = 0; j < n - i; j++) {
                if (j == n - i - 1) {
                    cout << a[i][j];
                    break;
                }
                cout << a[i][j] << " ";
            }
            cout << "]\n";
        }
    }
}