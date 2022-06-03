#include <bits/stdc++.h>
using namespace std;
int n, k, OK = 1;
int a[100], l = 0, x, b[100];
set <int> s;
void Khoi_tao() {
    cin >> n >> k;
    int h = 1;
    for (int i = 1; i <= n; i++) {
        cin >> x;
        s.insert(x);
    }
    for(auto i : s) a[h++] = i;
    n = h - 1;
}

void Sinh () {
    int i = k;
    while(i > 0 && b[i] == n - k + i) i--;
    if (i > 0) {                                 // nếu chưa phải tập con cuối cùng
        b[i] = b[i] + 1;                        // tăng giá trị tại vị trí i lên 1 
        for(int j = i + 1; j <= k; j++) {       // thay đổi a[j] = a[i] + j - i
            b[j] = b[i] + j - i;
        }
    }
    else OK = 0;
}   

int main() {
    Khoi_tao();
    for (int i = 1; i <= k; i++) b[i] = i;
    while(OK == 1) {
        for(int i = 1; i <= k; i++) cout << a[b[i]] << " ";
        cout << endl;
        Sinh();
    }
}