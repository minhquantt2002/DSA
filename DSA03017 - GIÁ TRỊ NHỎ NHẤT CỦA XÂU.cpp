#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<char, int> x, pair<char, int> y) {
    return x.second > y.second;
}
int main() {
	int t; cin >> t;
    while (t--) {
        int k;
        string s; cin >> k >> s;
        map<char, int> m;
        vector<pair<char, int>> ds;
        long long sum = 0;
        for (int i = 0; i < s.size(); i++) m[s[i]]++;
        for (auto i : m) {
            ds.push_back({i.first, i.second});
            sum += i.second * i.second;
        }
        while (k--) {
            sort(ds.begin(), ds.end(), cmp);
            sum -= ds[0].second * ds[0].second;
            ds[0].second--;
            sum += ds[0].second * ds[0].second;
        }        
        cout << sum << endl;
    }
}