#include <bits/stdc++.h>
using namespace std;
int a[1000005];
int main() {
    int t; cin >> t;
    while (t--) {
        int n, check = 0, k; cin >> n;
        map<int, int> arr;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            arr[a[i]]++;
        }
        for (int i = 0; i < n; i++) {
            if (arr[a[i]] >= 2) {
                cout << a[i] << endl;
                check = 1; 
                break;
            }
        }
        if (check == 0) cout << "NO\n";
    }
}