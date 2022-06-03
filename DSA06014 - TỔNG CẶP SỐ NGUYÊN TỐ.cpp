#include <bits/stdc++.h>
using namespace std;
int a[1000005] = {0};
int main() {
    int t; cin >> t;
    a[0] = 1; 
    a[1] = 1;
    for (int i = 2; i < 1000; i++) {
        if (!a[i]) {
            for (int j = i * i; j < 1000005; j += i) {
                a[j] = 1;
            }
        }
    }
    while (t--) {
        int k, i = 2, check = 0; cin >> k;
        while (i <= k / 2) {
            if (!a[i] && !a[k - i]) {
                cout << i << " " << k - i << endl;
                check = 1;
                break;
            } else i++;
        }
        if (check == 0) cout << "-1\n";
    }
}