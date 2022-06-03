#include<bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	while (t--) {
		string s, st = "";
		cin >> s;
		st = s[0];
		for (int i = 1; i < s.size(); i++) {
			if (st[st.size() - 1] != s[i]) st += '1';
			else st += '0';
		}	
		cout << st << endl;
	}
	
}
