#include<bits/stdc++.h>
using namespace std;
string ds[1000000];
int main() {
    int t; cin >> t;
    while (t--) {
        int n, j = 0; cin >> n;
        string s; cin >> s;
        int a[n] = {0};
        while (1) {
            int k;  
            string x = "";
            for (int i = 0; i < n; i++) if (a[i]) x += s[i];
            ds[j++] = x;
            for (k = n - 1; k >= 0; k--) if (a[k] == 0) break;
            if (k < 0) break;
            for (int i = k; i < n; i++) a[i] = 1 - a[i];
        }
        sort(ds, ds + j);
        for (int i = 0; i < j; i++) cout << ds[i] << " ";
        cout << endl;
    }
}