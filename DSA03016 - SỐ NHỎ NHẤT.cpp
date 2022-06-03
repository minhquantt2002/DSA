#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int s, d; cin >> s >> d;
        if (9 * d < s) {
            cout << "-1\n";
            continue;
        }
        int a[d] = {0}; a[0] = 1; s--;
        for (int i = d - 1; i >= 0; i--) {
            int temp = min(s, 9);
            a[i] += temp;
            s -= a[i];
        }
        for (int i = 0; i < d; i++) cout << a[i];
        cout << endl;
    }
}