#include <bits/stdc++.h>
using namespace std;
map<int, int> m;
queue<pair<int, int>> xl(string s) {
    queue<pair<int, int>> q;
    s += '.';
    int pos = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '+' || s[i] == '.') {
            int hs = 0, mu = 0, j = pos;
            while (s[j] > '9' || s[j] < '0') j++;
            while (s[j] >= '0' && s[j] <= '9') {
                hs = hs * 10 + (s[j] - '0');
                j++;
            }
            j += 3;
            while (s[j] >= '0' && s[j] <= '9') {
                mu = mu * 10 + (s[j] - '0');
                j++;
            }
            pos = i;
            q.push({hs, mu});
            m[mu] += hs;
        } 
    }
    return q;
}
int main() {
    int t = 1; 
    cin >> t; cin.ignore();
    while (t--) {
        string s1, s2; 
        getline(cin, s1);
        getline(cin, s2);
        queue<pair<int, int>> q1, q2;
        q1 = xl(s1);
        q2 = xl(s2);
        stack<pair<int, int>> st;
        for (auto i : m) st.push(i);
        cout << st.top().second << "*x^" << st.top().first;
        st.pop();
        while (!st.empty()) {
            cout << " + " << st.top().second << "*x^" << st.top().first;
            st.pop();
        }
        cout << endl;
        m.clear();
    }
}
