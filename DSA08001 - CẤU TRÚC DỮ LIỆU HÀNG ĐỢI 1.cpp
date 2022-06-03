#include <bits/stdc++.h>
using namespace std;
void q1(queue<int> q) {
    cout << q.size() << endl;
}
void q2(queue<int> q) {
    if (q.empty()) cout << "YES\n";
    else cout << "NO\n";
}
void q3(queue<int> &q) {
    int x; cin >> x;
    q.push(x);
}
void q4(queue<int> &q) {
    if (!q.empty()) q.pop();
}
void q5(queue<int> q) {
    if (!q.empty()) cout << q.front() << endl;
    else cout << "-1\n";
}
void q6(queue<int> q) {
    int x = -1;
    while (!q.empty()) {
        x = q.front(); q.pop();
    }
    cout << x << endl;
}
int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        queue<int> q;
        while (n--) {
            int x; cin >> x;
            switch (x) {
            case 1:
                q1(q);
                break;
            case 2:
                q2(q);
                break;
            case 3:
                q3(q);
                break;            
            case 4:
                q4(q);
                break;
            case 5:
                q5(q);
                break;
            case 6:
                q6(q);
                break;
            default:
                break;
            }
        }
    }   
}