#include <bits/stdc++.h>
using namespace std;
int a[1000005];
int main() {
    int t; cin >> t;
    while (t--) {
        int n, check = 0, k = -1e9, b; cin >> n;
        map<int, int> arr;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            arr[a[i]]++;
        }
        for (auto i : arr) {
            if (k < i.second) {
                k = i.second;
                b = i.first;
            }
        }
        if (k <= n / 2) cout << "NO\n";
        else cout << b << endl;
    }
}