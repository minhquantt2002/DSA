#include<bits/stdc++.h>
using namespace std;
int m = 1e9 + 7;
struct Matran {
	long long f[2][2];
};
Matran operator* (Matran A, Matran B) {
	Matran C;
	for (int i = 0; i <= 1; i++) {
		for (int j = 0; j <= 1;j++) {
			C.f[i][j] = 0;
			for (int k = 0; k <= 1; k++) {
				C.f[i][j] = (C.f[i][j] + A.f[i][k] * B.f[k][j] % m) % m;
			}
		}
	}
	return C;
}
Matran powMod(Matran A, int n) {
	if (n == 1) return A;
	Matran x = powMod(A, n / 2);
	if (n % 2 == 0) return x * x;
	return A * x * x;
}
int main() {
    int t; cin >> t;
    while (t--) {
    	int n; cin >> n;
    	Matran A;
    	A.f[0][0] = 1; A.f[0][1] = 1; A.f[1][0] = 1; A.f[1][1] = 0;
    	Matran kq = powMod(A, n);
    	cout << kq.f[1][0] << endl;
	}
}