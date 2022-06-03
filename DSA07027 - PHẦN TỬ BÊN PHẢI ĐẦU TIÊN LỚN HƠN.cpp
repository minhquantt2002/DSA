#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        stack<int> st;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        int res[n];
        for (int i = n - 1; i >= 0; i--) {
            
            while (!st.empty() && st.top() <= a[i]) st.pop();
            if (st.empty()) res[i] = -1;
            else {
                res[i] = st.top();
            }st.push(a[i]);
        }
        for (int i = 0; i < n; i++) {
            cout << res[i] << " ";
        }
        cout << endl;
    }
}