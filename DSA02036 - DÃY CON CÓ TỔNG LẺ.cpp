#include<bits/stdc++.h>
using namespace std;
bool check(int a, int b) {
    return a > b;
}
main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int arr[n], a[n] = {0};
        for (int i = 0; i < n; i++) cin >> arr[i];
        sort(arr, arr + n, check);
        while (1) {
            int k, tong = 0;
            for (int i = 0; i < n; i++) {
                if (a[i]) tong += arr[i];
            }
            if (tong % 2 != 0) {
                for (int i = 0; i < n; i++) {
                    if (a[i]) cout << arr[i] << " ";
                }
                cout << endl;
            }
            for (k = n - 1; k >= 0; k--) if (a[k] == 0) break;
            if (k < 0) break;
            for (int i = k; i < n; i++) a[i] = 1 - a[i];
        }
    }
}