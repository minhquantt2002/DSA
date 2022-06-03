#include <bits/stdc++.h>
using namespace std;
int n, a[100], check[101] = {0}, k, ok;
string s;
void in() {
    int tong = 0;
    for (int i = 0; i < n; i++) if (check[i + 1]) tong += a[i]; 
    if (tong != k) return;
    cout << "[";
    int t;
    ok = 1;
    for (t = n - 1; t >= 0; t--) if (check[t + 1] == 1) break;
    for (int i = 0; i < n; i++) {
        if (i != t && check[i + 1]) cout << a[i] << " "; 
    }
    cout << a[t] << "] ";
}
void DeQuy(int x) {
    for (int i = 1; i >= 0; i--) {
        check[x] = i; 
        if (n == x) in();
        else DeQuy(x + 1);
    }
}
int main() {
    int t; cin >> t;
    while (t--) {
        cin >> n >> k;
        ok = 0;
        for (int i = 0; i < n; i++) check[i] = 0;
        for (int i = 0; i < n; i++) cin >> a[i];
        sort(a, a + n);
        DeQuy(1);
        if (ok == 0) cout << "-1";
        cout << endl;
    }
}