#include <bits/stdc++.h>
using namespace std;

int main() {
	string s1[] = {"02/02/", "20/02/", "22/02/"};
    string s2[] = {"2000", "2002", "2020", "2022", "2200", "2202", "2220", "2222"};
    for (int i = 0; i < 3; i++) {
    	for (int j = 0; j < 8; j++) {
    		cout << s1[i] << s2[j] << endl;
		}
	}
}
