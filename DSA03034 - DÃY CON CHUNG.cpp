#include <bits/stdc++.h>
using namespace std;
typedef pair<char, int> pci;
int main() {
    int t; cin >> t;
    while (t--) {
        int n, m, p; cin >> n >> m >> p;
        int a[n], b[m], c[p];
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < m; i++) cin >> b[i];
        for (int i = 0; i < p; i++) cin >> c[i];
        int x = 0, y = 0, z = 0, check = 0;
        while (x < n && y < m && z < p) {
            if (a[x] == b[y] && b[y] == c[z]) {
                cout << a[x] << " ";
                check = 1;
                x++; y++; z++;
            } else if (a[x] < b[y]) x++;
            else if (b[y] < c[z]) y++;
            else z++;
        }
        if (check == 0) cout << "NO";
        cout << endl; 
    }
}
