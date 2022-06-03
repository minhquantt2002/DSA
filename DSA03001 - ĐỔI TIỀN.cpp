#include<bits/stdc++.h>
using namespace std;
int main() {
    int check[] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000}, k = 9;
    int t; cin >> t;
    while (t--) {
    	int n; cin >> n;
    	int c = 0;
    	while (n != 0) {
    		for (int i = k; i >= 0; i--) {
    			if (n - check[i] >= 0)  {
    				n -= check[i];
    				c++;
    				break;
				}
			}
		}
		cout << c << endl;
	}
}
