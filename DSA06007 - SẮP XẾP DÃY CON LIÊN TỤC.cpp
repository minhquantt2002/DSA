#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        int s = 0, e = n - 1;
        for (s = 0; s < n - 1; s++) if (a[s] > a[s + 1]) break;
        for (e = n - 1; e > 0; e--) if (a[e] < a[e - 1]) break;
        int min = a[s], max = a[s];
        for (int i = s + 1; i <= e; i++) {
            if (a[i] > max) max = a[i];
            if (a[i] < min) min = a[i];
        }
        for (int i = 0; i < s; i++) {
            if (a[i] > min) {
                s = i;
                break;
            }
        }
        for (int i = n - 1; i >= e; i--) {
            if (a[i] < max) {
                e = i;
                break;
            }
        }
        if (s != n - 1) cout << s + 1 << " " << e + 1;
        cout << endl;
    }
}