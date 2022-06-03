#include <bits/stdc++.h>
using namespace std;
int S[1000][1000];
int main() {
    int t; cin >> t;
    while (t--) {
        int n, count = 0;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n - 1; i++) {
            int kt = 0;
            for (int j = 0; j < n - i - 1; j++) {
                if (a[j] > a[j + 1]) {
                    swap(a[j], a[j + 1]);
                    kt = 1;
                }
            }
            if (kt == 0)
                break;
            for (int j = 0; j < n; j++) {
                S[count][j] = a[j];
            }
            count ++;
        }
        while (count--) {
            cout << "Buoc " << count + 1 << ": ";
            for (int j = 0; j < n; j++)
                cout << S[count][j] << " ";
            cout << endl;
        }
    }
}