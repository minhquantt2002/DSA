#include <bits/stdc++.h>
using namespace std;
int n, x[20], cot[20], xuoi[20], nguoc[20], c;
void Try(int i) {
    for (int j = 1; j <= n; j++) {
        if (cot[j] && xuoi[i - j + n] && nguoc[i + j - 1]) {
            x[i] = j;
            cot[j] = xuoi[i - j + n] = nguoc[i + j - 1] = 0;
            if (i == n) c++;
            else Try(i + 1);
            cot[j] = xuoi[i - j + n] = nguoc[i + j - 1] = 1;
        }
    }
}
int main() {
	int t; cin >> t;
	while (t--) {
		cin >> n;
		c = 0;
	    for (int i = 1; i <= 20; i++) {
	        cot[i] = 1;
	        xuoi[i] = 1;
	        nguoc[i] = 1;
	    }
	    Try(1);
	    cout << c << endl;
	}
    
}