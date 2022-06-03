#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        string s; cin >> s;
        stack<string> st;
        for (int i = s.size() - 1; i >= 0; i--) {
            if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/' || s[i] == '%') {
                if (st.size() >= 2 && !st.empty()) {
                    string s1 = st.top(); st.pop();
                    string s2 = st.top(); st.pop();
                    st.push('(' + s1 + s[i] + s2 + ')');
                }
            } else {
                string x = "";
                x += s[i];
                st.push(x);
            }
        }
        cout << st.top() << endl;
    }
}