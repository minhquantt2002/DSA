#include<bits/stdc++.h>
using namespace std;
int a[10000000], m = 1e9 + 7;
int main() {
    int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		long long x = 0;
		for (int i = 0; i < n; i++) cin >> a[i];
		sort(a, a + n);
		for (int i = 0; i < n; i++) {
			x += a[i] * i % m;
		}
		cout << x  % m << endl;
	}
}