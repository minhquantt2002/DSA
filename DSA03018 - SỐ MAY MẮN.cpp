#include<bits/stdc++.h>
using namespace std;
int main() {
	int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int ok = 0;
        for (int i = 0; i <= n / 7; i++) {
            if ((n - i * 4) % 7 == 0) {
                ok = 1;
                int x = n - i * 4;
                while (i--) cout << 4;
                while (x) {
                    cout << 7;
                    x -= 7;
                }
                cout << endl;
                break;
            }
        }
        if (ok == 0) cout << "-1" << endl;
    }
}