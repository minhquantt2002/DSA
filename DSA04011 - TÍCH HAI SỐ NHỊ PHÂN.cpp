#include<bits/stdc++.h>
using namespace std;
int n;
int main() {
	int t; cin >> t;
    while (t--) {
        string s1, s2; cin >> s1 >> s2;
        long long x = 0, y = 0;
        for (int i = 0; i < s1.size(); i++) {
            x = x * 2 + (s1[i] - '0');
        }
        for (int i = 0; i < s2.size(); i++) {
            y = y * 2 + (s2[i] - '0');
        }
        cout << x * y << endl;
    }
}