#include<bits/stdc++.h>
using namespace std;
bool check(string s) {
    int l=s.length();
    if(s[0] != 'H') return 0;
    for (int i = 1; i < l; i++) {
        if(s[i] == 'H' && s[i-1] == 'H') return 0;
    }
    if(s[l-1] == 'H') return 0;
    return 1;
}
int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        string s = "";
        for (int i = 0; i < n; i++) s += 'A';
        bool ok = 1;
        while (ok) {
            if(check(s)) cout << s << endl;
            int i = n - 1;
            while (s[i] == 'H' && i >= 0) i--;
            if (i < 0) {
                ok = 0;
            }
            else {
                s[i]='H';
                for (int j = i+1; j < n; j++) s[j]='A';
            }
        }
    }
}