#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        string s; cin >> s;
        stack<int> st;
        int d = 0;
        st.push(-1);
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(') st.push(i);
            else {
                st.pop();
                if (!st.empty() && st.size() > 0) 
                    d = max(d, i - st.top());
                if (st.size() == 0) st.push(i);
            }
        }
        cout << d << endl;
    }
}