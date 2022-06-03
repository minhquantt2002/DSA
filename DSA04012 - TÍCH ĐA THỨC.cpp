
#include <bits/stdc++.h>
using namespace std;
int n, s, res;
int a[10005];
void Try(int i, int value, int c) {
    if (i == n || value >= s || c >= res) {
        if (value == s) res = min(res, c);
        return;
    }
    Try(i + 1, value, c);
    Try(i + 1, value + a[i], c + 1);
}
int main() {
    int t = 1; 
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int a[n], b[m];
        vector<int> dem(n + m - 1, 0);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < m; i++) cin >> b[i];
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                dem[i + j] += a[i] * b[j];
            }
        }
        for (int i : dem) cout << i << " ";
        cout << endl;
    }
}
