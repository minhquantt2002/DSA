#include <bits/stdc++.h>
using namespace std;
typedef pair<char, int> pci;
int main() {
    int n; cin >> n;
    int a[n + 1], Max = 0, f[n + 1] = {0};
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i <= n; i++) {
        f[a[i]] = f[a[i] - 1] + 1;
        Max = max(Max, f[a[i]]);
    }
    cout << n - Max;
}
