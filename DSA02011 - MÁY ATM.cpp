#include <bits/stdc++.h>
using namespace std;
int n, s, res;
int a[10005];
void Try(int i, int value, int c) {
    if (i == n || value >= s || c >= res) {
        if (value == s) res = min(res, c);
        return;
    }
    Try(i + 1, value, c);
    Try(i + 1, value + a[i], c + 1);
}
int main() {
    int t = 1; 
    cin >> t;
    while (t--) {
        cin >> n >> s;
        res = INT_MAX;
        for (int i = 0; i < n; i++) cin >> a[i];
        Try(0, 0, 0);
        cout << (res != INT_MAX ? res : -1) << endl;
    }
}
