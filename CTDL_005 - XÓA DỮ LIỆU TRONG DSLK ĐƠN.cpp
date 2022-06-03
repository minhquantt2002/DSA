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
    int n;cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    int x; cin >> x;
    int c = 0, m = n;
    for (int i = 0; i < n; ) {
    	if (a[i] == x) {
    		for (int j = i; j < n - 1; j++) {
    			a[j] = a[j + 1];
			}
			n--;
		} else i++;
	}
	for (int i = 0; i < n; i++) cout << a[i] << " ";
}