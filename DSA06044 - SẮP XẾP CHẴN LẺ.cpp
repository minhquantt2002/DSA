#include <iostream>
#include <algorithm>
using namespace std;
bool check(int a, int b) {
    return a > b;
}
int main() {
    int n; cin >> n;
    int a[n], b[n], x, c = 0, l = 0;
    for (int i = 1; i <= n; i++) {
        cin >> x;
        if (i % 2 == 0) a[c++] = x;
        else b[l++] = x;
    }
    sort(a, a + c, check);
    sort(b, b + l);
    for (int i = 0; i < l; i++) {
        cout << b[i] << " ";
        if (i < c) cout << a[i] << " ";
    } 
}