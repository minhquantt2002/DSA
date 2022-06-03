#include <bits/stdc++.h>
using namespace std;
int n = 8, x[20][20], cot[20], xuoi[20], nguoc[20], Max;
void Try(int i, int s) {
    for (int j = 1; j <= n; j++) {
        if (cot[j] && xuoi[i - j + n] && nguoc[i + j - 1]) {
            cot[j] = xuoi[i - j + n] = nguoc[i + j - 1] = 0;
            if (i == n) {
            	s += x[i][j];
            	Max = max(s, Max);
			}
            else Try(i + 1, s + x[i][j]);
            cot[j] = xuoi[i - j + n] = nguoc[i + j - 1] = 1;
        }
    }
}
int main() {
	int t; cin >> t;
	while (t--) {
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= n; j++) cin >> x[i][j];
		}
		Max = 0;
	    for (int i = 1; i <= 20; i++) {
	        cot[i] = 1;
	        xuoi[i] = 1;
	        nguoc[i] = 1;
	    }
	    Try(1, 0);
	    cout << Max << endl;
	}
    
}
