#include <bits/stdc++.h>
using namespace std;
typedef pair<char, int> pci;
int main() {
    int t; cin >> t;
    while (t--) { 
        int n, s, m; cin >> n >> s >> m;
        if (n < m || 6 * n < 7 * m) {
            cout << - 1 << endl;
            continue;
        }
        int x = s * m;
        if (x % n == 0) x = x / n;
        else x = x / n + 1;
        cout << x << endl;
    }
}
