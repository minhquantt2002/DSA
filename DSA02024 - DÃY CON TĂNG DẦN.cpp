#include<bits/stdc++.h>
using namespace std;
vector<string> res;
int check[100] = {0}, a[100], n;
void add() {
	int c = 0;
	string s = "";
	for (int i = 1; i <= n; i++) if (check[i]) c++;
	if (c == 1) return;
	for (int i = 1; i <= n; i++) {
		if (check[i]) {
			string k = to_string(a[i]);
			s += k + ' ';
		}
	}
	res.push_back(s);
}
void Try(int x) {
    for (int i = x + 1; i <= n; i++) {
        if (a[i] > a[x]) {
			check[x] = 1;
			check[i] = 1;
            add();
            Try(i);
            check[i] = 0;
        }
    }
}
int main() {
	cin >> n;
	for (int i = 1; i <= n; i++) cin >> a[i];
	Try(0);
	sort(res.begin(), res.end());
	for (int i = 0; i < res.size(); i++) cout << res[i] << endl;
}
