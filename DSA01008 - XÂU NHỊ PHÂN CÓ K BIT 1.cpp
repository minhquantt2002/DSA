#include <bits/stdc++.h>
using namespace std;
int main() {
    int t; cin >> t;
    while (t--) {
        int n, k; cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; ++i) a[i] = 0;
        while (1) {
            int count = 0;
            for (int i = 0; i < n; ++i) if (a[i]) count++;
            if (count == k) {
                for (int i = 0; i < n; ++i) cout << a[i];
                cout << "\n";
            }    
            int sr;
            for (sr = n - 1; sr >= 0; sr--) if (a[sr] == 0) break;
            if (sr < 0) break;
            for (int i = sr; i < n; i++) a[i] = 1 - a[i]; 
        }
        cout << endl;
    }
}