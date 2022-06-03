#include<bits/stdc++.h> 
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        long long a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        long long res = 0;
        for (int i = 0; i < n; i++) {
            int l = i, r = i, s1 = 0, s2 = 0;
            while (a[l] >= a[i] && l >= 0) {
                l--;
                s1++;
            }
            while (a[r] >= a[i] && r < n) {
                r++;
                s2++;
            }
            res = max(res, a[i] * (s1 + s2 - 1));
        }
        cout << res << endl;
    }
}