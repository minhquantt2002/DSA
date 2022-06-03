#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    cin.ignore();
    while (t--) {
        string s; getline(cin, s);
        stack<char> st;
        int check = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(' || s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/') {
                st.push(s[i]);
            }
            if (s[i] == ')') {
                if (st.top() == '(') {
                    check = 1;
                    break;
                }
                while (st.size() >= 1 && st.top() != '(') st.pop();
                st.pop();
            }
        }
        if (check) cout << "Yes\n";
        else cout << "No\n";
    }
}