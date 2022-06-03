#include <bits/stdc++.h>
using namespace std;
int a[100], b[100];
int main() {
    int t; cin >> t;
    while (t--) {
        int n, k, count = 0;
        cin >> n >> k;
        for (int i = 1; i <= k; ++i) cin >> a[i];
        int l = k;
        while (l > 0 && a[l] == n - k + l) l--;
        if (l > 0) {
            for (int i = l; i <= k; i++) b[i] = a[i];
            a[l]++;
            for (int i = l + 1; i <= k; ++i) a[i] = a[l] + i - l;
            for (int i = l; i <= k; i++) {
                for (int j = l; j <= k; j++) {
                    if (a[i] == b[j]) {
                        count++;
                        break;
                    }
                }
            }
            count = k - l + 1 - count;
        } else count = k;
        cout << count << endl;
    }
}