#include <bits/stdc++.h> 
using namespace std;
int x[1001], n, temp, s;
bool ok = false;
void Try(int i) {
    if (i > n) return;
    if (temp == s / 2) {
        ok = true;
        return;
    }
    for (int j = 0; j <= 1; j++) {
        temp += j * x[i];
        if (temp <= s / 2) Try(i + 1);
        else temp -= j * x[i];
    }
}
int main() {
    int t; cin >> t;
    while (t--) {
        s = 0;
        ok = false;
        cin >> n;
        temp = 0;
        for (int i = 1; i <= n; i++) {
            cin >> x[i]; 
            s += x[i];
        }
        if (s % 2 != 0) cout << "NO" << endl;
        else {
            Try(1);
            if (ok == true) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }
}