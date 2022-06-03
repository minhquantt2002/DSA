#include <bits/stdc++.h>
using namespace std;
int a[105], b[105], l[105];
int main() {
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		for (int i = 1;i <= n;i++) {
			cin >> a[i];
			b[i] = a[i];
			l[i] = a[i];
		}
		for (int i = 1;i < n;i++) {
			for (int j = 1;j < i;j++) {
				if (a[i] > a[j]) {
					b[i] = max(b[i], b[j] + a[i]);
				}
			}
		}
		for (int i = n - 1;i >= 0;i--) {
			for (int j = n;j > i;j--) {
				if (a[i] > a[j]) {
					l[i] = max(l[i], l[j] + a[i]);
				}
			}
		}
		int res = 0;
		for (int i = 1;i <= n;i++) {
			res = max(res, b[i] + l[i] - a[i]);
		}
		cout << res << endl;
	}
}