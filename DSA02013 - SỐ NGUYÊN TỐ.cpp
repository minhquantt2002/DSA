#include<bits/stdc++.h>
using namespace std;
int a[1005], n, s, p;
vector<int> nt;
vector<string> res;
void Try(int l, int sum, vector<int> ds) {
    if (sum == s && ds.size() == n) {
        string s = "";
        for (int i = 0; i < n; i++) {
            string temp = to_string(ds[i]);
            s += temp + ' ';
        }
        res.push_back(s);
        return;
    } 
    for (int i = l + 1 ; i < nt.size(); i++) {
        if (sum + nt[i] <= s && ds.size() < n) {
            ds.push_back(nt[i]);
            Try(i, sum + nt[i], ds);
            ds.pop_back();
        }
        else break;
    }
}
int main() {
	int t; cin >> t;
    memset(a, 1, sizeof(a));
    a[0] = a[1] = 0;
    for (int i = 2; i < 300; i++) 
        if (a[i]) for (int j = i * i; j < 300; j += i) a[j] = 0;
    for (int i = 2; i <= 300; i++) if (a[i]) nt.push_back(i);
    while (t--) {
        cin >> n >> p >> s;
        res.clear();
        int k;
        for (k = 0; k < nt.size(); k++) if (nt[k] == p) break;
        Try(k, 0, {});
        sort(res.begin(), res.end());
        cout << res.size() << endl;
        for (string i : res) {
            cout << i << "\n";
        }
    }
}