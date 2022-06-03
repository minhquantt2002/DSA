#include<bits/stdc++.h>
using namespace std;
int main() {
    int t; cin >> t;
	while (t--) {
		int n; cin >> n;
        int a[n], b[n], p1 = 0, p2 = 0, ans, m = n;
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n - 1; i++) cin >> b[i];
        while (p1 != n - 1) {
            if (a[p1] != b[p2]) {
                ans = p1 + 1;
                break;
            } else p1++; p2++;
        }
		cout << ans << endl;
	}	
}