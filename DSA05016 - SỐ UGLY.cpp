#include <bits/stdc++.h>
using namespace std;

int GET(int n) {
	int ugly[n];
	int i2 = 0, i3 = 0, i5 = 0;
	int boi2 = 2, boi3 = 3, boi5 = 5, result = 1;
	ugly[0] = 1;
	for (int i = 1; i < n; i++) {
		result = min(boi2, min(boi3, boi5));
		ugly[i] = result;
		if (result == boi2) {
			i2 = i2 + 1;
			boi2 = ugly[i2] * 2;
		}
		if (result == boi3) {
			i3 = i3 + 1;
			boi3 = ugly[i3] * 3;
		}
		if (result == boi5) {
			i5 = i5 + 1;
			boi5 = ugly[i5] * 5;
		}
	}
	return result;
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		cout << GET(n) << endl;
	}
	return 0;
}