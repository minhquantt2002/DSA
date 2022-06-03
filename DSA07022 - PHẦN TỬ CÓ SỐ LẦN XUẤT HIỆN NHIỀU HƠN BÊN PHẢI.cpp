#include <bits/stdc++.h>
using namespace std;
map<int, int> m;
int main() {
    int t = 1; 
    cin >> t;
    while (t--) {
        int n; cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            m[a[i]]++;
        }
        stack<int> st;
        int res[n];
        for (int i = n - 1; i >= 0; i--) {
            while (!st.empty() && m[a[i]] >= m[st.top()]) st.pop();
            if (st.empty()) res[i] = -1;
            else res[i] = st.top();
            st.push(a[i]);
        }
        for (int i = 0; i < n; i++) cout << res[i] << " ";
        cout << endl;
        m.clear();
    }
}
