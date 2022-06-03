#include <bits/stdc++.h>
using namespace std;
int n, check[100];
char x[100], c;
void in() {
	int ok = 1;
	for (char i = 'A' + 1; i <= c - 1; i++)
        if ((x[i] == 'A' || x[i] == 'E') && 
        (x[i - 1] != 'A' && x[i - 1] != 'E') && 
        (x[i + 1] != 'A' && x[i + 1] != 'E'))
            ok = 0;
    if (ok) {
    	for (char i = 'A'; i <= c; i++) cout << x[i];
		cout << endl;
	}
	
}
void Try(char i) {
    for (char j = 'A'; j <= c; j++) {
        if (check[j]) {
            x[i] = j;
            check[j] = 0;
            if (i == c) in();
            else Try(i + 1);
            check[j] = 1;
        }
    }
}
int main() {
	    cin >> c;
    	for (int i = 50; i <= 100; i++) check[i] = 1;
    	Try('A');
}