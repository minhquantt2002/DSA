#include <bits/stdc++.h>
using namespace std;
int main() {
    int t; cin >> t;
    while (t--) {
        long long n, m, x = -1e9, y = 1e9, z; cin >> n >> m;
        for (int i = 0; i < n; i++) {
            cin >> z;
            if (z > x) x = z;
        }
        for (int i = 0; i < m; i++) {
            cin >> z;
            if (z < y) y = z;
        }
        long long tich = x * y;
        cout << tich << endl;
    }
}