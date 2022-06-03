#include<bits/stdc++.h>
using namespace std;
int a[100][100], n, ok;
void backtrack(int i, int j, string s) {
	if (i == n - 1 && j == n - 1) {
		cout << s << " ";
		ok = 1;
	}
	if (i < n - 1 && a[i + 1][j] == 1)
        backtrack(i + 1, j, s + 'D');
    if (j < n - 1 && a[i][j + 1] == 1)
        backtrack(i, j + 1, s + 'R');
}
int main() {
	int t; cin >> t;
	while (t--) {
		cin >> n;
		ok = 0;
		for (int i = 0; i < n; i++) for (int j = 0; j < n; j++) cin >> a[i][j];
		if (a[0][0] == 1) backtrack(0, 0, "");
		if (ok == 0) cout << "-1";
		cout << endl;
	}
}