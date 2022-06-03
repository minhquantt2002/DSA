#include <bits/stdc++.h>
using namespace std;
int a[50], s, dem = 1000, n;
void backtrack(int i, int j, int x) {
    if (j > s || x > dem) return;
    if (i == n) {
        if (j == s)
            dem = min(dem, x);
        return;
    }
    backtrack(i + 1, j, x);
    backtrack(i + 1, j + a[i], x + 1);
}
int main() {
    cin >> n >> s;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    backtrack(0, 0, 0);
    if (dem == 1000)
        cout << -1;
    else
        cout << dem;
}