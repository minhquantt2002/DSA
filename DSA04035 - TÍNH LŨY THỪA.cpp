#include<bits/stdc++.h>
using namespace std;
int M = 1e9 + 7;
long long powMod(long long n, long long k) {
	if (k == 0) return 1;
	long long x = powMod(n, k / 2);
	if (k % 2 == 0) return x * x % M;
	return (x * x % M) * n % M;
}
int main() {
    while (1) {
        long long n, k;
    	cin >> n >> k; 
        if (n == 0 && k == 0) break;
    	cout << powMod(n, k) << endl;
	}
}