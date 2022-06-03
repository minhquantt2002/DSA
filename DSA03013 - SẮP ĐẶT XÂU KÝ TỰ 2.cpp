#include <bits/stdc++.h>
using namespace std;
typedef pair<char, int> pci;
int main() {
    int t; cin >> t;
    while (t--) {
        int d; string s;
        cin >> d >> s;
        int a[30] = {0}, kq = 0;
        for (int i = 0; i < s.size(); i++)
            a[s[i] - 'A']++;
        for (int i = 0; i < 30; i++) kq = max(kq, a[i]);
        if (kq * d > s.size() + 1) cout << -1 << endl;
        else cout << 1 << endl;
    }
}
