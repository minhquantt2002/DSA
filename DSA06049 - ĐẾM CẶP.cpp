#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        long long n, k, count = 0;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        sort(a, a + n);
        for (int i = 0; i < n - 1; i++) {
            int x = lower_bound(a + i + 1, a + n, k + a[i]) - a;
            count += x - 1 - i;
        }
        cout << count << endl;
    }
}