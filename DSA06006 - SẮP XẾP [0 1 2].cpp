#include <bits/stdc++.h>
using namespace std;
int main() {
    int t; cin >> t;
    while (t--) {
        int check[3] = {0, 0 ,0};
        int n, x; cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> x;
            check[x]++;
        }
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < check[i]; j++) cout << i << " ";
        }
        cout << endl;
    }
}