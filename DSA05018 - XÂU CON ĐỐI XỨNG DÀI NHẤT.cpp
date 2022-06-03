#include <bits/stdc++.h>
using namespace std;
int f[1005][1005], a[1005];
string s;
int tinh() {
    memset(f, 0, sizeof(f));
    int n = s.size(), kq = 1, j = 0;
    for (int i = 1; i <= n; i++) f[i][i] = 1;
    for (int k = 1; k < n; k++) {
        for (int i = 0; i < n - k; i++) {
            j = i + k;
            if (s[i] == s[j] && k > 1) f[i][j] = f[i + 1][j - 1];
            else if (s[i] == s[j] && k == 1) f[i][j] = 1;
            else f[i][j] = 0;
            if (f[i][j]) kq = max(kq, j - i + 1);
        }
    }
    return kq;
}
int main() {
    int t; cin >> t;
    while (t--) {
        cin >> s;
        cout << tinh() << endl; 
    }
}