#include <bits/stdc++.h>
using namespace std;
int f[40005], n, s, a[1005];
int ktra() {
    memset(f, 0, sizeof(f));
    f[0] = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = s; j >= a[i]; j--) {
            if (f[j] == 0 && f[j - a[i]] == 1) f[j] = 1;          
        }
    }
    return f[s];
}
int main() {
    int t; cin >> t;
    while (t--) {
        cin >> n >> s;
        for (int i = 1; i <= n; i++) cin >> a[i];
        if (ktra()) cout << "YES\n";
        else cout << "NO\n";
    }
}