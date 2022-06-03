#include <bits/stdc++.h>
using namespace std;
int mod = 1e9 + 7, n;
struct mt {
    long long a[20][20];
    friend mt operator*(mt x, struct mt y) {
        mt c;
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                c.a[i][j] = 0;
                for (int p = 1; p <= n; p++) {
                    c.a[i][j] = (c.a[i][j] + (x.a[i][p] * y.a[p][j]) % mod) % mod;
                }
            }
        }
        return c;
    }
};
void out() {

}
mt poww(mt a, int m) {
    // if (m == 1) return a;
    // mt c = poww(a, m / 2);
    // if (m % 2 == 0) return c * c;
    // return a * c * c;
    if (m == 1) return a;
	if (m % 2 == 1) return a * poww(a, m - 1);
	struct mt c = poww(a, m / 2);
	return c * c;
}
int main() {
    int t; cin >> t;
    while (t--) {
        int m; cin >> n>> m;
        mt a;
        for (int i = 1; i <= n; i++) for (int j = 1; j <= n; j++) cin >> a.a[i][j];
        a = poww(a, m);
        long long tong = 0;
        for (int i = 1; i <= n; i++) {
            tong = (tong + a.a[i][n]) % mod;
        }
        cout << tong << endl;
    }
}