#include <bits/stdc++.h>
using namespace std;
int m = 1e9 + 7;
int main() {
	int t; cin >> t;
	while (t--) {
		string s; cin >> s;
		int a['z' + 1] = {};
		for (int i = 0; i < s.size(); i++) a[s[i]]++;
		int M = *max_element(a + 'a', a + 'z');
		if (M > s.size() - M + 1) cout << -1 << endl;
		else cout << 1 << endl;
	}	
}
