#include <iostream>
#include <string>
using namespace std;
int main() {
   int t; cin >> t;
   while (t--) {
      string s = "";
      int n, k; cin >> n >> k;
      int a[k], stop = 0;
      for (int i = 0; i < k; i++) s += char('A' + i);
      do {
         cout << s << endl;
         int l = k - 1;
         while (l >= 0 && s[l] == n - k + l + 'A') l--;
         if (l >= 0) {
            s[l]++;
            for (int i = l + 1; i < k; ++i) s[i] = s[l] + i - l;
         } else stop = 1;
      } while (stop != 1);
   }
}
// 3 2 AB-AC-BC
//     01-01-01