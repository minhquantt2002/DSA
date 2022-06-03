#include<bits/stdc++.h>
using namespace std;
int check(char x) {
    if (x == '^') return 4;
    if (x == '*' || x == '/') return 3;
    if (x == '+' || x == '-') return 2;
    return 1;
}
int main() {
	int t; cin >> t;
    while (t--) {
        string s; cin >> s;
        stack<char> st;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(') st.push(s[i]);
            else if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/' || s[i] == '^') {
                while (!st.empty() && check(st.top()) >= check(s[i])) {
                    cout << st.top();
                    st.pop();
                }
                st.push(s[i]);
            }
            else if (s[i] == ')') {
                while (st.top() != '(') {
                    cout << st.top();
                    st.pop();  
               } 
               st.pop();
            } else cout << s[i];
        }
        while (!st.empty()) {
            if (st.top() != '(') cout << st.top();
            st.pop();
        }
        cout << endl;
    }
}