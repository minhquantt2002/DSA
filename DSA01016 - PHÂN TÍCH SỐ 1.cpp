#include <bits/stdc++.h>
using namespace std;
int a[50];
void out(int k) {
    cout << "(";
    for (int i = 1; i < k; i++) {
        cout << a[i] << ' ';
    }
    cout << a[k] << ") ";
}
void backtrack(int x, int i, int s) {
    for (int j = x; j >= 1; j--) {
        a[i] = j;
        if (s == j) out(i);
        else if (j < s) {
            backtrack(j, i + 1, s - j);
        }
    }
} 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        backtrack(n, 1, n);
        cout << endl;
    }
}