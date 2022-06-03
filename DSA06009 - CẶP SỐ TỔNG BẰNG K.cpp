#include <bits/stdc++.h>
using namespace std;
int main() {
    int t; cin >> t;
    while (t--) {
        int n, k; cin >> n >> k;
        int a[n], c = 0; 
        for (int i = 0; i < n; i++) cin >> a[i];
        sort(a, a + n);
        for (int i = 0; i < n - 1; i++) {
            if (a[i] > k) break;
            for (int j = i + 1; j < n; j++) {
                if (a[i] + a[j] == k) c++;
                else if (a[i] + a[j] > k) break;
            }
        }
        cout << c << endl;
    }
}