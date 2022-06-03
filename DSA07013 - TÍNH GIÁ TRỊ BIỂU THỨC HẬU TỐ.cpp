#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        string s; cin >> s;
        stack<int> st;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] >= '0' && s[i] <= '9') st.push(s[i] - '0');
            else {
                if (st.size() >= 2) {
                    int y = st.top(); st.pop();
                    int x = st.top(); st.pop();
                    int d = 0;
                    if (s[i] == '/') d = x / y;
                    if (s[i] == '*') d = x * y;
                    if (s[i] == '+') d = x + y;
                    if (s[i] == '-') d = x - y;
                    st.push(d);
                } 
            }
        }
        cout << st.top() << endl;
    }
}