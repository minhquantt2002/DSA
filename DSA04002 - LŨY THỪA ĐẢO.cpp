#include<bits/stdc++.h>
using namespace std;
int M = 1e9 + 7;
long long powMod(long long n, long long k) {
	if (k == 0) return 1;
	long long x = powMod(n, k / 2);
	if (k % 2 == 0) return (x * x) % M;
	return (((x * x) % M) * n) % M;
}
int main() {
    int t; cin >> t;
    while (t--) {
        long long n, k = 0;
    	cin >> n;
    	long long x = n;
    	while (x != 0) {
			k = k * 10 + x % 10;    		
    		x /= 10;
		}
    	cout << powMod(n, k) << endl;
	}
}