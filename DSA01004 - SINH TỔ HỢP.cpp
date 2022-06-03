#include <bits/stdc++.h>
using namespace std;
int main() {
    int t; cin >> t;
    while (t--) {
        int n, k; cin >> n >> k;
        int a[n];
        for (int i = 1; i <= k; ++i) a[i] = i;
        int stop = 0;
        do {
            for (int i = 1; i <= k; ++i) cout << a[i];
            cout << " ";
            int l = k;
            while (l > 0 && a[l] == n - k + l) l--;
            if (l > 0) {
                a[l]++;
                for (int i = l + 1; i <= k; ++i) a[i] = a[l] + i - l;
            } else stop = 1;
        } while (stop != 1);
        cout << endl;
    }
}