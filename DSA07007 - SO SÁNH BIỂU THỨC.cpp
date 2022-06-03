#include <bits/stdc++.h>
using namespace std;
string in(string s) {
    stack<char> st;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] != ')')  st.push(s[i]);
        else {
            string str = "";
            while (!st.empty() && st.top() != '(') {
                str = st.top() + str;
                st.pop();
            }
            st.pop();
            int ok = 1;
            if (!st.empty() && st.top() == '-') ok = -1;
            for (int j = 0; j < str.size(); j++) {
                if (ok == -1) {
                    if (str[j] == '-') st.push('+');
                    else if (str[j] == '+') st.push('-');
                    else st.push(str[j]);
                } else st.push(str[j]);
            }
        }
    }        
    string res = "";
    while (!st.empty()) {
        res = st.top() + res;
        st.pop();
    }
    return res;
}
int main() {
    int t = 1; 
    cin >> t; 
    while (t--) {
        // long long s, t; cin >> s >> t;
        int MAX = 0;
        string s1, s2; cin >> s1 >> s2;
        cout << ((in(s1) == in(s2)) ? "YES\n" : "NO\n");
    }
}