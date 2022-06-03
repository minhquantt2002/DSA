#include<bits/stdc++.h>
using namespace std;
string ds[10000];
int main() {
	int n, k; cin >> n >> k;
	int c = 0;
	int a[n] = {0};
	while (1) {
		int ok = 0, check = 0;
		for (int i = 0; i < n - 1;) {
			if (a[i] == 0 && a[i + 1] == 0) {
				int dem = 0;
				while (a[i] == 0) {
					i++;
					dem++;	
				}
				if (dem == k) ok++;
				else if (dem > k) check++;
			} else i++;
		}
		if (ok == 1 && check == 0) {
			for (int i = 0; i < n; i++) {
				if (!a[i]) ds[c] += 'A';
				else ds[c] += 'B';
 			}	
 			c++;
		}
		int t;
		for (t = n - 1; t >= 0; t--) if (a[t] == 0) break;
		if (t < 0) break;
		for (int i = t; i < n; i++) a[i] = 1 - a[i];
	}
	cout << c << "\n";
	for (int i = 0; i < c; i++) cout << ds[i] << endl;
}
