#include <bits/stdc++.h>
using namespace std;
int mod = 1e9 + 7;
long long f[52];
void xuly() {
    f[0] = 1; f[1] = 1; f[2] = 2;
    for (int i = 3; i <= 50; i++) {
        f[i] = f[i - 1] + f[i - 2] + f[i - 3];
    }
}
int main() {
    int t; cin >> t;
    xuly();
    while (t--) {
        int n, k; cin >> n;
        cout << f[n] << endl;
    }
}