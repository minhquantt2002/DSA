#include<bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	while (t--) {
		string s, st = "";
		cin >> s;
		st = s[0];
		for (int i = 1; i < s.size(); i++) {
			if (s[i] == '1') {
				if (s[i - 1] == '0') st += '1';
				else st += '0';
			}
			else {
				if (s[i - 1] == '1') st += '1';
				else st += '0';
			}
		}	
		cout << st << endl;
	}
	
}
