#include <bits/stdc++.h>
using namespace std;
// long long a[1000005], b[1000005], c[1000005];
int main() {
    int t; cin >> t;
    while (t--) {
        int n, m, k, ok = 0; cin >> n >> k;
        int a[k + 1];
        for (int i = 1; i <= k; i++) cin >> a[i];
        int l = k - 1;
        while (l > 0 && a[l] + 1 == a[l + 1]) l--;
		if (l > 0) {
            l++; a[l]--;
			for (int i = k; i > l; i--) a[i] = n - k + i;
			for (int i = 1; i <= k; i++) cout << a[i] << " ";
        }	
		else {
			for (int i = n - k + 1; i <= n; i++) cout << i << " ";
		}
		cout << endl;
    }
}
// 2 3 4
// 1 3 4
// 1 2 4
// 1 2 3