#include<bits/stdc++.h>
using namespace std;
long long F[100];
char process(long long n, long long k) {
	if (n == 1) return '0';
	if (n == 2) return '1';
	if (k <= F[n - 2]) return process(n - 2, k);
	return process(n - 1, k - F[n - 2]);
}
int main() {
    int n; cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) cin >> a[i];
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n;) {
			if (a[i] == a[j]) {
				for (int k = j; k < n - 1; k++) a[k] = a[k + 1];
				n--;
			} else j++;
		}
	}
	for (int i = 0; i < n; i++) cout << a[i] << " ";
}
