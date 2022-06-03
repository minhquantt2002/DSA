#include <bits/stdc++.h>
using namespace std;
int main() {
    int t = 1; 
    cin >> t; 
    while (t--) {
        // long long s, t; cin >> s >> t;
        int MAX = 0;
        string s; cin >> s;
        stack<char> st;
        for (int i = 0; i < s.size(); i++) {
            if (!st.empty() && s[i] == ')' && st.top() == '(') st.pop(); 
            else st.push(s[i]);
        }
        cout << s.size() - st.size() << endl;
    }
}