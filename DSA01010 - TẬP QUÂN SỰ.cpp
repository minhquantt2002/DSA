#include<bits/stdc++.h>
using namespace std;
int main() {
	int t; cin >> t;
	while (t--) {
		int n, k; cin >> n >> k;
		int a[n], b[n];
		for (int i = 1; i <= k; i++) {
			cin >> a[i];
			b[i] = a[i];
		}
		int c = 0;
        int l = k;
        while (l > 0 && a[l] == n - k + l) l--;
        if (l > 0) {
            a[l]++;
            for (int i = l + 1; i <= k; ++i) a[i] = a[l] + i - l;
            for (int i = 1; i <= k; i++) {
            	for (int j = 1; j <= k; j++) {
            		if (a[i] == b[j]) {
            			c++;
            			break;
					} 
				}
			}
			c = k - c;
        } else c = k;
        cout << c << endl;
	}
}
