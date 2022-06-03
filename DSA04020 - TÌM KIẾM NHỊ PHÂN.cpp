#include<bits/stdc++.h>
using namespace std;
int main() {
    int t; cin >> t;
    while (t--) {
        int n, x; cin >> n >> x;
        int a[n], ok = 0;
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) {
            if (a[i] == x) {
                ok = i + 1;
                break;
            }
        }
        if (ok) cout << ok << endl;
        else cout << "NO\n"; 
    }
}