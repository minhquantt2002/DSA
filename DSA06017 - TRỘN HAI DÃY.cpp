#include<bits/stdc++.h>
using namespace std;
int a[1000005];
int main() {
    int t; cin >> t;
    while (t--) {
        int n, m; cin >> n >> m;
        for (int i = 0; i < n + m; i++) cin >> a[i];
        sort(a, a + n + m);
        for (int i = 0; i < n + m; i++) cout << a[i] << " ";
        cout << endl;
    }
}