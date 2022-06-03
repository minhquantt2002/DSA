#include<iostream>
using namespace std;
int process(int a[], int n) {
   for (int i = 0; i < n / 2; i++) {
      if (a[i] != a[n - 1 - i]) return 0;
   }
   return 1;
}
int main() {
   int n, a[100]; cin >> n;
   for (int i = 0; i < n; i++) a[i] = 0;
   int top;
   while (1) {
      for (top = n - 1; top >= 0; top--) if (a[top] == 0) break;
      if (process(a, n)) {
         for (int i = 0; i < n; i++) cout << a[i] << " "; 
         cout << endl;
      }
      if (top < 0) break;
      for (int i = top; i < n; i++) a[i] = 1 - a[i];
   }
}