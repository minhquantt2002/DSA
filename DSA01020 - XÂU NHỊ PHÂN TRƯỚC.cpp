#include <bits/stdc++.h>
using namespace std;
int main() {
    int t; cin >> t;
    while (t--) {
        string str; cin >> str;
        int k;
        for (k = str.length() - 1; k >= 0; k--) if (str[k] == '1') break;
        if (k < 0) {
            for (int i = 0; i < str.length(); i++) str[i] = '1';
            cout << str;
        } else {
            for (int i = k; i < str.length(); i++) {
                if (str[i] == '1') str[i] = '0';
                else str[i] = '1';
            }
            cout << str;
        }
        cout << endl;
    }
}