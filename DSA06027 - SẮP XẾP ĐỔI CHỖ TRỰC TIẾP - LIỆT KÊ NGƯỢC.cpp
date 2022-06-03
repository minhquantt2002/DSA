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
            int lct = i;
            for (int j = i + 1; j < n; j++) {
                if (a[i] > a[j])
                    swap(a[i], a[j]);
            }
            for (int k = 0; k < n; k++)
                S[count][k] = a[k];
            count++;
        }
        for (int i = 0; i < count; i++) {
            cout << "Buoc " << count - i << ": ";
            for (int j = 0; j < n; j++)
                cout << S[count - i - 1][j] << " ";
            cout << endl;
        }
    }
}