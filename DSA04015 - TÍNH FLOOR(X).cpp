#include<bits/stdc++.h>
using namespace std;
int main() {
    int t; cin >> t;
	while (t--) {
        long long x;
		int n; cin >> n >> x;
        long long a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        int k = n - 1, d = -1;
        while (k >= 0) {
            if (a[k] <= x) {
                d = k + 1;
                break;
            } else k--;
        }
        cout << d << endl;
    }
}