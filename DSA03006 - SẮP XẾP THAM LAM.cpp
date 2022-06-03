#include <bits/stdc++.h>
using namespace std;
int main() {
    int t; cin >> t;
    while (t--) {
        int n;
        bool check = true;
        cin >> n;
        int a[n], b[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            b[i] = a[i];
        }
        sort(b, b + n);
        for (int i = 0; i < n; i++) {
            if (b[i] == a[i] || b[n - i - 1] == a[i]) continue;
            else {
                check = false;
                break;
            }
        }
        if (check) cout << "Yes\n";
        else cout << "No\n";
    }
}
