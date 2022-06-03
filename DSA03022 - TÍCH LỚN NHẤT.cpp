#include <bits/stdc++.h>
using namespace std;
typedef pair<char, int> pci;
int main() {
    int n; cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n);
    long long x1 = a[0] * a[1], x2 = a[n - 2] * a[n - 1], x3 = a[n - 1] * a[n - 2] * a[n - 3], x4 = a[0] * a[1] * a[n - 1];
    long long Max = x1;
    Max = max(Max, x2);
    Max = max(Max, x3);
    Max = max(Max, x4);
    cout << Max;
}
