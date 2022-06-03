#include <bits/stdc++.h>
using namespace std;
int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n; cin.ignore();
        string s; getline(cin, s);
        queue<int> q;
        for (int i = s.length() - 1; i >= 0; --i) {
            if (s[i] == ' ') continue;
            if (isdigit(s[i])) {
                string tmp = "";
                while (isdigit(s[i])) tmp = s[i--] + tmp;
                i++;
                q.push(stoi(tmp));
            } else {
                int y = q.front(); q.pop();
                int x = q.front(); q.pop(); 
                if (s[i] == '+') q.push(x + y);
                else if (s[i] == '-') q.push(x - y);
                else if (s[i] == '*') q.push(x * y);
                else if (s[i] == '/') q.push(x / y);
            }
        }
        cout << q.front() << endl;
    }
}