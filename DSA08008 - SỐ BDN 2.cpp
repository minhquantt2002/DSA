#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        queue<long long> q;
        q.push(1);
        long long x = 1; q.pop();
        while (x % n != 0) {
            q.push(x * 10);
            q.push(x * 10 + 1);
            x = q.front(); q.pop();
        }
        cout << x << endl;
    }   
}
