#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    deque<int> dq;
    string s;
    while (t--) {
        cin >> s; 
        if (s == "PUSH") {
            int n; cin >> n;
            dq.push_back(n);
        } else if (s == "PRINTFRONT") {
            if (!dq.empty()) cout << dq.front() << endl;
            else cout << "NONE\n";
        } else if (s == "POP") {
            if (!dq.empty()) dq.pop_front();
        }
    }   
}
