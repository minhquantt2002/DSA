#include <bits/stdc++.h>
using namespace std;
int main() {
    int t = 1; 
    cin >> t;
    while (t--) {
        int k; cin >> k;
        string s; cin >> s;
        int dd[127] = {};
        for (char i : s) dd[i]++;
        priority_queue<int> q;
        for (int i : dd) if (i > 0) q.push(i);
        while (k--) {
            if (q.empty()) break;
            int x = q.top(); q.pop();
            x--;
            q.push(x);
        }
        long long ans = 0;
        while (!q.empty()) {
            long long x = q.top(); q.pop();
            ans += x * x;
        }
        cout << ans << endl;
    }
}
