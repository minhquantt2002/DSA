#include<bits/stdc++.h>
using namespace std;
int main() {
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		pair<int, int> a[n];
		for (int i = 0; i < n; i++) {
			cin >> a[i].first;
			a[i].second = i;
		}
		sort(a, a + n);
		int res = -1, second = a[0].second, first = a[0].first;
		for (int i = 1; i < n; i++) {
			if (a[i].first > first) res = max(res, a[i].second - second);
			if (second > a[i].second) {
				second = a[i].second;
				first = a[i].first;
			}
		}
		cout << res << endl;
	}
}