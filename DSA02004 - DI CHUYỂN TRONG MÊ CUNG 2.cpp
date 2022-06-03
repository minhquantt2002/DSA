#include<bits/stdc++.h>
using namespace std;
int a[105][105], n, b[105][105];
vector<string> ds;
void Try(int x, int y, string s) {
    if (x == n && y == n) {
        ds.push_back(s);
    }
    if (x < n && a[x + 1][y] == 1 && !b[x + 1][y]) {
        b[x][y] = 1;
        Try(x + 1, y, s + 'D');
        b[x][y] = 0;
    }
    if (y < n && a[x][y + 1] == 1 && !b[x][y + 1]) {
        b[x][y] = 1;
        Try(x, y + 1, s + 'R');
        b[x][y] = 0;
    }
    if (y > 0 && a[x][y - 1] == 1 && !b[x][y - 1]) {
        b[x][y] = 1;
        Try(x, y - 1, s + 'L');
        b[x][y] = 0;
    }
    if (x > 0 && a[x - 1][y] == 1 && !b[x - 1][y]) {
        b[x][y] = 1;
        Try(x - 1, y, s + 'U');
        b[x][y] = 0;
    }
}
int main() {
	int t; cin >> t;
    while (t--) {
        cin >> n; 
        memset(b, 0, sizeof(b));
        ds.clear();
        for (int i = 1; i <= n; i++) for (int j = 1; j <= n; j++) cin >> a[i][j];
        if (a[1][1] == 1 && a[n][n] == 1) Try(1, 1, "");
        if (ds.size() == 0) cout << "-1\n";
        else {
            sort(ds.begin(), ds.end());
            for (string s : ds) {
                cout << s << " ";
            }
            cout << endl;
        }
    }
}