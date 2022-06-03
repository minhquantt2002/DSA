#include<bits/stdc++.h>
using namespace std;
int main() {
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		int a[n] = {0};
		long long x;
		while (1) {
			int k; x = 0;
			for (int i = 0; i < n; i++) {
				x = x * 10 + 9 * a[i];
			}
			if (x > 0 && x % n == 0) break;
			for (k = n - 1; k >= 0; k--) if (!a[k]) break;
			if (k < 0) break;
			for (int i = k; i < n; i++) a[i] = 1 - a[i];
		}
		cout << x << endl;
	}
}
