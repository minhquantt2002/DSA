#include <bits/stdc++.h>
using namespace std;
// int a[10000007];
int main() {
    int t; cin >> t;
    while (t--) {
        int n, x, k, lca = 0;
        cin >> n >> k;
        for (int i = 0; i < n; i++) {
            cin >> x;
            if (x == k) {
                lca = i + 1;
            }
        }
        cout << lca << endl;
    }
}