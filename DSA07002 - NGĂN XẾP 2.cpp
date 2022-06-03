#include <bits/stdc++.h>
using namespace std;
int main() {
    int t; cin >> t;
    string s;
    int n, l = 0;
    stack<int> ds;
    while (t--) {
        cin >> s;
        l = ds.size();
        if (s == "PUSH") {
            cin >> n;
            ds.push(n);
        }
        else if (s == "POP") {
            if (l > 0) ds.pop();
        } else if (s == "PRINT") {
            if (ds.size() == 0) cout << "NONE" << endl;
            else {
                cout << ds.top() << endl;
            }
        }
    }
}