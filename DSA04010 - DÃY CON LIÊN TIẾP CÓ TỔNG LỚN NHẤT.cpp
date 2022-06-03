#include<bits/stdc++.h>
using namespace std;
int main() {
    int t; cin >> t;
	while (t--) {
        int n; cin >> n;
        int x, Max = 0, s = 0;
        for (int i = 0; i < n; i++) {
            cin >> x;
            s += x;
            Max = max(Max, s);
            if (s < 0) s = 0;
        }
        cout << Max << endl;
    }
}