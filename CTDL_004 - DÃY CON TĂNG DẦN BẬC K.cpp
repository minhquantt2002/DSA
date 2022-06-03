#include<bits/stdc++.h>
using namespace std;
int main() {
	int n, k; cin >> n >> k;
	int a[n], b[n];
	for (int i = 0; i < n; i++) cin >> b[i];
	for (int i = 1; i <= k; i++) a[i] = i;
	int stop = 0, c = 0;
    do {
        int l = k, ok = 0;
        for (int i = 1; i < k; i++) {
        	if (b[a[i] - 1] < b[a[i + 1] - 1]) ok++;
		}
		if (ok == k - 1) c++;
        while (l > 0 && a[l] == n - k + l) l--;
        if (l > 0) {
            a[l]++;
            for (int i = l + 1; i <= k; ++i) a[i] = a[l] + i - l;
        } else stop = 1;
    } while (stop != 1);
    cout << c << endl;
}
