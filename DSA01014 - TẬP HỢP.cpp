#include<bits/stdc++.h>
using namespace std;
int main() {
	while (1) { 
        int n, k, s, d = 0;
        cin >> n >> k >> s;
        if (n < k) {
            cout << 0 << endl;
            continue;
        }
        if (n == 0 && k == 0 && s == 0) return 0;
        int a[k + 1];
        for (int i = 1; i <= k; i++) a[i] = i;
		int stop = 0;
        do {
        	int x = 0;
            for (int i = 1; i <= k; i++) x += a[i];
            if (x == s) d++;
            int l = k;
            while (l > 0 && a[l] == n - k + l) l--;
            if (l > 0) {
                a[l]++;
                for (int i = l + 1; i <= k; ++i) a[i] = a[l] + i - l;
            } else stop = 1;
        } while (stop != 1);	
        cout << d << endl;
    }
}
