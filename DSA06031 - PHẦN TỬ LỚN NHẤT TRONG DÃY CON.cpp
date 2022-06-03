#include <bits/stdc++.h>
using namespace std;
int S[1000][1000];
int main() {
    int t; cin >> t;
    while (t--) {
        int n, k; cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n - k + 1; i++) {
            int Max = -1e9;
            for (int j = i; j < i + k; j++) {
                Max = max(Max, a[j]);
            }
            cout << Max << " ";
        }
        cout << endl;

    }
}