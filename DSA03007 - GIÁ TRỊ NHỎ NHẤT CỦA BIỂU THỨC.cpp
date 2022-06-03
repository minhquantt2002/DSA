#include <bits/stdc++.h>
using namespace std;
bool ss(int a, int b) {
    return a > b;
}
int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        long long a[n], b[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];
        sort(a, a + n);
        sort(b, b + n, ss);
        long long tich = 0;
        for (int i = 0; i < n; i++) {
            tich += a[i] * b[i];
        }
        cout << tich << endl;
    }
}
