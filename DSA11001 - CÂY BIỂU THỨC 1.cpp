#include<bits/stdc++.h> 
using namespace std;
int lv(char x) {
    if (x == '/' || x == '*') return 2;
    if (x == '+' || x == '-') return 1;
    return 0;
} 
int main() {
    int t; cin >> t;
    while (t--) {
        string s; cin >> s;
        stack<string> st;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/') {
                string s1 = "", s2 = "";
                if (!st.empty()) {
                    s1 = st.top(); st.pop();
                    s2 = st.top(); st.pop();
                }
                s1 = s2 + s[i] + s1;
                st.push("" + s1);
            } else {
                string temp = "";
                st.push(temp + s[i]);
            }
        }
        cout << st.top() << endl; 
    }
}