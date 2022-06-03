#include<bits/stdc++.h>
using namespace std;
int main() {
    int n; cin >> n;
    int a[n] = {0};
	int s[20];
	s[0] = 8; s[n - 1] = 6;
	while (1) {
		int ok = 1;
		for (int i = 1; i < n - 1; i++) {
			if (!a[i]) s[i] = 6;
			else s[i] = 8;
		}
		for (int i = 0; i < n - 1; i++) {
			if (s[i] == 6 && s[i + 1] == 6) {
				int c = 0;
				for (int j = i; j < n; j++) {
					if (s[j] == 6) c++;
					else break;
				}
				if (c > 3) ok = 0;
			}
			if (s[i] == 8 && s[i + 1] == 8) ok = 0;
		}
		if (ok) {
			for (int i = 0; i < n; i++) cout << s[i];
			cout << endl;
		}
		int t;
		for (t = n - 2; t >= 1; t--) if (a[t] == 0) break;
		if (t == 0) break;
		for (int i = t; i < n - 1; i++) a[i] = 1 - a[i];
	}
}
