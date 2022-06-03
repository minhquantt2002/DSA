#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        string s; cin >> s;
        stack<int> st;
        for (int i = s.size() - 1; i >= 0; i--) {
            if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/' || s[i] == '%') {
                int s1 = st.top(); st.pop();
                int s2 = st.top(); st.pop();
                int s3;
                if (s[i] == '+') s3 = s1 + s2;
                if (s[i] == '-') s3 = s1 - s2;
                if (s[i] == '*') s3 = s1 * s2;
                if (s[i] == '/') s3 = s1 / s2;
                st.push(s3);
            } else {
                int x = s[i] - '0';
                st.push(x);
            }
        }
        cout << st.top() << endl;
    }
}