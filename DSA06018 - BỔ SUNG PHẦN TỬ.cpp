#include<bits/stdc++.h>
using namespace std;
int a[1000005], check[100005];
int main() {
    int t; cin >> t;
    while (t--) {
        int n, Max = -1e9, Min = 1e9, count = 0; cin >> n;
        for (int i = 0; i < 100005; i++) check[i] = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            check[a[i]]++;
        }
        for (int i = 0; i < n; i++) {
            Max = max(Max, a[i]);
            Min = min(Min, a[i]);
        }
        for (int i = Min; i <= Max; i++) {
            if (check[i] == 0) count++;
        }
        cout << count << endl;
    }
}