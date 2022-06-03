#include<iostream>
using namespace std;
int main() {
   int n, k, a[100], b[100]; cin >> n >> k;
   for (int i = 0; i < n; i++) a[i] = 0;
   for (int i = 0; i < n; i++) cin >> b[i];
   int top, tong = 0, count = 0;
   while (1) {
      for (int i = 0; i < n; i++) {
         if (a[i] == 1) tong += b[i];
      }
      if (tong == k) {
         count++;
         for (int i = 0; i < n; i++) {
            if (a[i] == 1) cout << b[i] << " ";
         }
         cout << endl;
      }
      tong = 0;
      for (top = n - 1; top >= 0; top--) if (a[top] == 0) break;
      if (top < 0) break;
      for (int i = top; i < n; i++) a[i] = 1 - a[i];
   }
   cout << count;
}