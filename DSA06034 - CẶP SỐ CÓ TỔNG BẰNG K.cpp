#include <bits/stdc++.h>
using namespace std;
long long a[1000005];
int main() {
    int t; cin >> t;
    while (t--) {
        long long n, count = 0, k; cin >> n >> k;
        map<long long, long long> arr;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            arr[a[i]]++;
        }
        for (auto i : arr) {
            if (k == 2 * i.first) count += i.second * (i.second - 1);
            else count += i.second * arr[k - i.first];
        }
        cout << count / 2 << endl;
    }
}