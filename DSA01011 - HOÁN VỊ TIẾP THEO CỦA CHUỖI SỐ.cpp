#include <bits/stdc++.h>
using namespace std;
// long long a[1000005], b[1000005], c[1000005];
int main() {
    int t; cin >> t;
    while (t--) {
        int n, ok = 0; cin >> n;
        cin.ignore();
        string str; cin >> str;
        int r, l;
        for (r = str.size() - 2; r >= 0; --r) if (str[r] < str[r + 1]) break;
        if (r < 0) {
            cout << n << " " << "BIGGEST\n";
            continue;
        }
        for (l = str.size() - 1; l > r; --l) if (str[r] < str[l]) break;
        swap(str[r], str[l]);
        for (int i = r + 1, j = str.size() - 1; j > i; --j, ++i) swap(str[i], str[j]);
        cout << n << " " << str;
		cout << endl;
    }
}
// 2 3 4
// 1 3 4
// 1 2 4
// 1 2 3