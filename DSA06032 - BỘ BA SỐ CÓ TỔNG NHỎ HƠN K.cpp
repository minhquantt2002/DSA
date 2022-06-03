#include <bits/stdc++.h>
using namespace std;
int main() {
    int t; cin >> t;
    while (t--) {
        long long n, count = 0; cin >> n;
        long long k, a[n];
        cin >> k;
        for (int i = 0; i < n; i++) cin >> a[i];
        sort(a, a + n);
        for (int i = 0; i < n - 2; i++) {
            for (int j = i + 1; j < n - 1; j++) {
                int x = lower_bound(a + j + 1, a + n , k - a[i] - a[j]) - a;
                count += x - j - 1;
            }
        }
        cout << count << endl;
    }
}