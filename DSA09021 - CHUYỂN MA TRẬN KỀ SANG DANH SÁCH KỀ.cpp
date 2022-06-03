#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, x; cin >> n;
    vector<int> ds[n + 1];
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> x;
            if (x == 1) {
                ds[i].push_back(j);
            }
        }
    }
    for (int i = 1; i <= n; i++) {
        for (auto j : ds[i]) cout << j << " ";
        cout << endl;
    }
}

