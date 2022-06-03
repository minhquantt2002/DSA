#include <bits/stdc++.h>
using namespace std;
int S[1000][1000];
int main() {
    int n, count = 0;
    cin >> n;
    int a[n], d = n - 1;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++) {
        int k = a[i];
        int j = i - 1;
        while (j >= 0 && a[j] > k) {
            a[j + 1] = a[j];
            j = j - 1;
        }
        a[j + 1] = k;
        for (int l = 0; l < n; l++)
            S[count][l] = a[l];
        count++;
    }
    while (count--) {
        cout << "Buoc " << d-- << ": ";
        for (int j = 0; j <= d + 1; j++)
            cout << S[count][j] << " ";
        cout << endl;
    }
}