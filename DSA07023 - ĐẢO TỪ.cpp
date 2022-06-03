#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t; cin.ignore();
    while (t--) {
        string s, tk; getline(cin, s);
        stack<string> st1, st2;
        stringstream ss(s);
        while (ss >> tk) st1.push(tk);
        while (!st1.empty()) {
            cout << st1.top() << " ";
            st1.pop();
        }
        ss.clear();
        cout << endl;
    }
}