#include <bits/stdc++.h>
using namespace std;
int mod = 1e9 + 7;
long long a[1005][1005];
void xuly() {
    for (int i = 0; i <= 1000; i++) {
        for (int j = 0; j <= i; j++) {
            if (j == i || j == 0) a[i][j] = 1;
            else a[i][j] = (a[i - 1][j - 1] + a[i - 1][j]) % mod;
        }
    }
}
int main() {
    int t; cin >> t;
    xuly();
    while (t--) {
        int n, k; cin >> n >> k;
        cout << a[n][k] << endl;
    }
}