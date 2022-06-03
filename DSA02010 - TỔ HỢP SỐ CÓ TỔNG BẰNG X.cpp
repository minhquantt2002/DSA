#include <bits/stdc++.h>
using namespace std;
int n, x, a[25], c[25], check;
void out(int m) {
    check = 1;
    cout << "[";
    for (int i = 1; i < m; i++)
        cout << c[i] << ' ';
    cout << c[m] << "]";
}
void backtrack(int i, int t) {
    for (int j = 1; j <= n; j++) {
        if (a[j] >= c[i - 1] && t + a[j] <= x) {
            c[i] = a[j];
            t += a[j];
            if (t == x) out(i);
            else if (t > x) return;
            else backtrack(i + 1, t);
            t -= a[j];
        }
    }
}
int main() {
    int t; cin >> t;
    while (t--) {
        cin >> n >> x;
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        check = 0;
        backtrack(1, 0);
        if (!check)
            cout << -1;
        cout << endl;
    }
}