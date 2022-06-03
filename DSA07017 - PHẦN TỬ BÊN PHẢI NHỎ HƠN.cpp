#include<bits/stdc++.h> 
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int a[n];
        stack<int> st;
        for (int i = 0; i < n; i++) cin >> a[i];
        int res[n], kq[n];
        for (int i = n - 1; i >= 0; i--) {
            while (!st.empty() && a[st.top()] <= a[i]) st.pop();
            if (st.empty()) res[i] = -1;
            else res[i] = st.top();
            st.push(i);
        }
        while (!st.empty()) st.pop();
        for (int i = n - 1; i >= 0; i--) {
            while (!st.empty() && st.top() >= a[i]) st.pop();
            if (st.empty()) kq[i] = -1;
            else kq[i] = st.top();
            st.push(a[i]);
        }
        for (int i = 0; i < n; i++) {
            if (res[i] == -1) cout << -1 << " ";
            else cout << kq[res[i]] << " ";
        }
        cout << endl;
    }
}