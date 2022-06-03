#include <bits/stdc++.h>
using namespace std;
int check[100005], check2[10005];
int main() {
    int t; cin >> t;
    while (t--) {
        int n, m, x; cin >> n >> m;
        for (int i = 0; i < 100005; i++) check[i] = 0;
        for (int i = 0; i < n + m; i++) {
            cin >> x;
            check[x]++;
        }
        for (int i = 0; i < 100005; i++) {
            if (check[i] != 0) cout << i << " ";
        }
        cout << endl;
        for (int i = 0; i < 100005; i++) {
            if (check[i] == 2) cout << i << " ";
        }
        cout << endl;
    }
}