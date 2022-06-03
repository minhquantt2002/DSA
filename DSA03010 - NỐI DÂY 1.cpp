#include <bits/stdc++.h>
using namespace std;
int main() {
	int t; cin >> t;
	while (t--) {
		int n, a; cin >> n;
		priority_queue <int, vector<int>, greater<int> > q;
		for (int i = 0; i < n; i++) {
			cin >> a;
			q.push(a);
		}
		long long kq = 0;
		while (q.size() >= 2) {
			int x = q.top(); q.pop();
			int y = q .top(); q.pop();
			q.push(x + y);
			kq += x + y;
		}
		cout << kq << endl;
	}
    
}
