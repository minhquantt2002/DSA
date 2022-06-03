#include<bits/stdc++.h>
using namespace std;
main() {
    int n, k; cin >> n >> k;
    string x;
    vector<string> s;
    map<string, int> m;
    for (int i = 0; i < n; i++) {
        cin >> x;
        m[x]++;
    }
    for (auto i : m) s.push_back(i.first);
    n = s.size();
    int a[n + 1];
    for (int i = 1; i <= k; i++) a[i] = i;
    int stop = 0;
    do {
        for (int i = 1; i <= k; i++) cout << s[a[i] - 1] << " ";
        cout << endl;
        int l = k;
        while (l > 0 && a[l] == n - k + l) l--;
        if (l > 0) {
            a[l]++;
            for (int i = l + 1; i <= k; ++i) a[i] = a[l] + i - l;
        } else stop = 1;
    } while (!stop);
}
