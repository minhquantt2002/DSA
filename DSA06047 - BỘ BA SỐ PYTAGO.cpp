#include <bits/stdc++.h>
using namespace std;
int main() {
    int t; cin >> t;
    while (t--) {
        int n, ok = 0; cin >> n;
        long long a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            a[i] = a[i] * a[i];
        }
        for (int i = n - 1; i >= 2; i--) { 
            int l = 0;
            int r = i - 1;
            while (l < r){ 
                if (a[l] + a[r] == a[i]) {
                    ok = 1;
                    break;
                } else if (a[l] + a[r] < a[i]) l++; 
                else r--; 
                if (ok == 1) break;
            } 
        }
        if (ok == 1) cout << "YES\n";
        else cout << "NO\n";
    }
}