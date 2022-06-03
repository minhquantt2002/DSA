#include<bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	while (t--) {
		string l1[10000], l2[10000];
		l1[0] = l2[1] = "0"; l1[1] = l2[0] = "1";
		int n; cin >> n;
		int x = 2;
		n -= 1;
		while (n--) {
			for (int i = 0; i < x; i++) l2[i] = l1[x - i - 1];
			for (int i = 0; i < x; i++) l1[i] = '0' + l1[i];
			for (int i = 0; i < x; i++) l2[i] = '1' + l2[i];
			for (int i = x; i < x * 2; i++) l1[i] = l1[i] + l2[i - x]; 
			x *= 2; 
		}
		for (int i = 0; i < x; i++) cout << l1[i] << " ";
		cout << endl;
	}
	
}
