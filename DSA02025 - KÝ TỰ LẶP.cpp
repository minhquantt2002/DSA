#include <bits/stdc++.h>
using namespace std;
int c[20][20], A[20], B[20] = {0}, n, fopt = 1e9, cmin = 1e9, cost = 0;
void quaylui(int i) {
    for (int j = 1; j <= n; j++) {
        if (B[j] == 0) {
            A[i] = j;
            B[j] = 1;
            cost = cost + c[A[i - 1]][A[i]];
            if (i == n) fopt = min(fopt, cost);
            else if (cost + cmin * (n - i + 1) < fopt) quaylui(i + 1);
            cost -= c[A[i - 1]][A[i]];
            B[j] = 0;
        }
    }
}
int dem(string a, string b) {
    int i = 0, j = 0, d = 0;
    while (i < a.size() && j < b.size()) {
        if (a[i] == b[j]) {
            i++;
            j++;
            d++;
        }
        else if (a[i] < b[j]) i++;
        else j++;
    }
    return d;
}
int main() {
    int i, j;
    string tmp;
    vector<string> vs;
    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> tmp;
        vs.push_back(tmp);
    }
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            if (i == j) c[i][j] = 1e9;
            else c[i][j] = dem(vs[i - 1], vs[j - 1]);
            cmin = min(cmin, c[i][j]);
        }
    }
    quaylui(1);
    cout << fopt << endl;
}
