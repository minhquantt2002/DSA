#include<bits/stdc++.h>
using namespace std;
int main() {
	int t; cin >> t;
	while (t--) {
		long long n, k; cin >> n >> k;
		long long a[n], b[k], c = 0;
		int check[10000] = {0};
		for (int i = 0; i < n; i++) cin >> a[i];
		for (int i = 0; i < k; i++) {
			cin >> b[i];
			check[b[i]]++;
		}
		sort(b, b + k);
		for (int i = 0; i < n; i++) {
			int d = 0;
			if (a[i] == 0) continue;
			if (a[i] == 1) {
				c += check[0];
				continue;
			}
		 	if (a[i] == 2) c -= (check[4] + check[3]);
		 	if (a[i] == 3) c += check[2];
			long long x = upper_bound(b, b + k, a[i]) - b;
			c += k - x;
//			cout << "a[i] : " << d << endl;
			c += check[1] + check[0];
//			cout << d << endl;
		}
		cout << c << endl;
	}
}
