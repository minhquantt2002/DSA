#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        queue<long long> q;
        q.push(9);
        long long x = 9; q.pop();
        while (1) {
            q.push(x * 10);
            q.push(x * 10 + 9);
            if (x % n == 0) break;
            x = q.front(); q.pop();
        }
        cout << x << endl;
    }   
}
