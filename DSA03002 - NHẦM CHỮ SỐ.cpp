#include<bits/stdc++.h>
using namespace std;
int n5 = 0, n6 = 0, m5 = 0, m6 = 0, a[100], k = 0, b[100], l = 0, n, m;
void tach(int x[], int &y, int &z) {
	while (z > 0) {
		x[y++] = z % 10;
		z /= 10;
	} 
}
void process(int x[], int &y5, int &y6, int &z) {
	for (int i = z - 1; i >= 0; i--) {
		if (x[i] == 5) {
			y6 = y6 * 10 + x[i] + 1;
			y5 = y5 * 10 + x[i];
		} else if (x[i] == 6) {
			y6 = y6 * 10 + x[i];
			y5 = y5 * 10 + x[i] - 1;
		} else {
			y6 = y6 * 10 + x[i];
			y5 = y5 * 10 + x[i];
		}
	}
}
int main() {
    cin >> n >> m;
	tach(a, k, n);
	tach(b, l, m);
	process(a, n5, n6, k);
	process(b, m5, m6, l);
	cout << n5 + m5 << " " << m6 + n6;
}
