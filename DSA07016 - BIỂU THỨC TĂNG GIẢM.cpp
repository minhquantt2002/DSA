#include <bits/stdc++.h>
using namespace std;
string s;
int main() {
    int t; cin >> t;
    while (t--) {
        cin >> s;
        stack<int> st;
        for (int i = 0; i < s.size(); i++) {
            st.push(i + 1);
            if (s[i] == 'I') {
                while (!st.empty()) {
                    cout << st.top();
                    st.pop();
                }
            }
        }
        st.push(s.size() + 1);
        while (!st.empty()) {
            cout << st.top();
            st.pop();
        }
        cout << endl;
    }
}