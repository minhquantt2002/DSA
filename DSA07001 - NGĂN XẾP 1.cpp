#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    int n, a[1000], k = 0;
    stack<int> ds;
    while (cin >> s) {
        if (s == "push") {
            cin >> n;
            ds.push(n);
        }
        else if (s == "pop") {
            ds.pop();
        } else {
            if (ds.empty()) cout << "empty" << endl;
            else {
                while (!ds.empty()) {
                    a[k++] = ds.top(); ds.pop();
                }
                for (int i = k - 1; i >= 0; i--) {
                    ds.push(a[i]);
                    cout << a[i] << " ";
                }
                cout << endl;
                k = 0;
            }
        }
    }
}