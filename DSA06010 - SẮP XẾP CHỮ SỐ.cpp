#include <bits/stdc++.h>
using namespace std;
int main() {
    int t; cin >> t;
    while (t--) {
        int n, k; cin >> n;
        int check[10] = {0};
        for (int i = 0; i < n; i++) {
            cin >> k;
            while (k > 0) {
                check[k % 10]++;
                k /= 10;
            }
        }
        for (int i = 0; i < 10; i++) {
            if (check[i]) cout << i << " ";
        }
        cout << endl;
    }
}