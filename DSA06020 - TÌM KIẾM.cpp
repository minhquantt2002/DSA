#include <bits/stdc++.h>
using namespace std;
int main() {
    int t; cin >> t;
    while (t--) {
        int n, k, check = -1, x; cin >> n >> k;
        for (int i = 0; i < n; i++) {
            cin >> x;
            if (x == k) check = 1;
        }
        if (check == 1) cout << "1\n";
        else cout << "-1\n";
    }
}