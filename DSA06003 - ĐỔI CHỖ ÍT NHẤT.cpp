#include <bits/stdc++.h>
using namespace std;
int main() {
    int t; cin >> t;
    while (t--) {
        int n, count = 0; cin >> n;
        int a[n];    
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) {
            int Max = 1e9, ad = i;
            for (int j = i + 1; j < n; j++) {
                if (Max > a[j]) {
                    Max = a[j];
                    ad = j;
                }
            }
            if (a[i] > Max) {
                count++;
                swap(a[i], a[ad]);
            }
        }
        cout << count << endl;
    }
}