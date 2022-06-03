#include <bits/stdc++.h>
using namespace std;
char quaylui(string s, long long n) {
    long long x = s.size();
    if (n < x) return s[n];
    while (2 * x <= n) x *= 2;
    if (x == n) return quaylui(s, n - 1);
    return quaylui(s, n - x - 1);
}
int main() {
    int t;
    string s;
    long long n;
    cin >> t;
    while (t--) {
        cin >> s >> n;
        cout << quaylui(s, n - 1) << endl;
    }
}
