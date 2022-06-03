#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;
	float tl; cin >> n >> tl;
	float gt[n], kl[n];
	int kq[n] = {0}, a[n] = {0};
	for (int i = 0; i < n; i++) cin >> gt[i];
	for (int i = 0; i < n; i++) cin >> kl[i];
	float Max = 0;
	while (1) {
		int t; 
		float tongkl = 0, tonggt = 0;
		for (int i = 0; i < n; i++) {
			if (a[i]) {
				if (tongkl + kl[i] <= tl) {
					tongkl += kl[i];
					tonggt += gt[i];
				}
			}
		}
		if (tonggt > Max) {
			Max = tonggt;
			for (int i = 0; i < n; i++) kq[i] = a[i];
		}
		for (t = n - 1; t >= 0; t--) if (!a[t]) break;
		if (t < 0) break;
		for (int i = t; i < n; i++) a[i] = 1 - a[i];
	}
	cout << Max << endl;
	for (int i = 0; i < n; i++) cout << kq[i] << " ";
}
