#include<bits/stdc++.h>
using namespace std;
int a[111][111], n, m, x;
int main() {
	int t; cin >> t;
	while (t--) {
		cin >> n >> m;
		for (int i = 0; i <= n; i++) for (int j = 0; j <= m; j++) a[i][j] = 0;
		a[0][1] = 1;
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= m; j++) {
				cin >> x;
				a[i][j] = a[i - 1][j] + a[i][j - 1];
			}
		}
		cout << a[n][m] << endl;
	}
}
