#include <bits/stdc++.h>
using namespace std;
int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        queue<string> q;
        q.push("6"); q.push("8");
        string x = q.front(); q.pop();
        vector<string> ds;
        while (x.size() <= n) {
            ds.push_back(x);
            q.push(x + '6');
            q.push(x + '8');
            x = q.front(); q.pop();
        }
        cout << ds.size() << endl;
        for (string i : ds) cout << i << " ";
        cout << endl;
    }   
}
