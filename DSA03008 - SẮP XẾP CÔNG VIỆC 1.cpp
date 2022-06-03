#include <bits/stdc++.h>
using namespace std;
struct task {
	int x, y;
} a[1005];
bool cmp(task a, task b) {
	return a.y < b.y;
}
int main() {
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		for (int i = 0; i < n; i++) cin >> a[i].x;
		for (int i = 0; i < n; i++) cin >> a[i].y;	
		sort(a, a + n, cmp);
		int i = 0, d = 1;
		for (int j = 1; j < n; j++) {
			if (a[j].x >= a[i].y) {
				d++;
				i = j;
			}
		}
		cout << d << endl;
	}
    
}
