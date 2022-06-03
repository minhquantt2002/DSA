#include <bits/stdc++.h>
using namespace std;
int main() {
    int t; cin >> t;
    while (t--) {
        int n, pos = 0; cin >> n;
        int a[n + 1];
        for (int i = 0; i < n; ++i) cin >> a[i];
        for (int i = 1; i < n; i++) {
			if (a[i] < a[i - 1]) {
				pos = i;
				break;
			}
		}
		cout << pos << endl;
    }
}