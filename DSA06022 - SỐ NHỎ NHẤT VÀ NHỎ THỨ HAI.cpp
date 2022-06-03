#include <bits/stdc++.h>
using namespace std;
int main() {
    int t; cin >> t;
    while (t--) {
        int n, x; cin >> n;
        set<int> arr;
        for (int i = 0; i < n; i++) {
            cin >> x;
            arr.insert(x);
        }
        if (arr.size() == 1) cout << "-1\n";
        else {
            int c = 0;
            for (auto &it:arr) {
                c++;
                cout << it << " ";
                if (c == 2) break;
            }
            cout << endl;
        }
    }
}