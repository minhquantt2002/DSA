#include<iostream>
using namespace std;
int n, OK;
string s;
void khoitao() {
    for(int i = 0; i < n; i++) s += 'A';
}
void Sinh() {
    int i = n - 1;
    while(i >= 0 && s[i] == 'B') {
        s[i] = 'A';
        i--;
    }
    if(i >= 0) s[i] = 'B';
    else OK = 0;
}
int main() {
    int test;
    cin >> test;
    while(test--) {
        cin >> n;
         OK = 1;
        s = "";
        khoitao();
        while(OK) {
            cout << s;
            Sinh();
            cout <<" ";
        }
        cout  << endl;
    }
}