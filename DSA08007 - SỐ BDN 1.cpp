#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        long long n, c = 0; cin >> n;
        queue<long long> q;
        q.push(1);
        long long x = 1; q.pop();
        while (x <= n) {
            q.push(x * 10);
            q.push(x * 10 + 1);
            x = q.front(); q.pop();
            c++;
        }
        cout << c << endl;
    }   
}