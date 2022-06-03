#include<bits/stdc++.h>
using namespace std;
int M = 1e9 + 7;
int process(long long n, long long k) {
	long long x = pow(2, n - 1);
	if (k == x) return n;
	if (k < x) return process(n - 1, k);
	return process(n - 1, k - x);
}
int main() {
    int t; cin >> t;
    while (t--) {
        long long n, k;
    	cin >> n >> k;
    	cout << process(n, k) << endl;
	}
}
