#include <bits/stdc++.h>
using namespace std;
int a[100], check[101] = {0};
string s;
void in() {
    for (int i = 0; i < s.size(); i++) cout << s[a[i]];
    cout << " ";
}
void Try(int i) {
    for (int j = 0; j < s.size(); j++) {
        if (!check[j]) {
            a[i] = j;
            check[j] = 1;
            if (i == s.size() - 1) in();
            else Try(i + 1);
            check[j] = 0;
        }
    }
}
int main() {
    int t; cin >> t;
    while (t--) {
        cin >> s;
        Try(0);
        cout << endl;
    }
}