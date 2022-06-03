#include<iostream>
#include<algorithm>
using namespace std;
int test, num;
int arr[1000];
int compare(const void* a, const void* b) {
    const int* x = (int*) a;
    const int* y = (int*) b;
    if (*x > *y) return 1;
    else if (*x < *y) return -1;
    return 0;
}
void input (){
    for(int i = 0; i < num; i++) cin >> arr[i];
}

void output (){
    int count = num;
     for(int i = 0; i < num / 2 + 1; i++) {
        cout << arr[num - i - 1] << " " << arr[i] << " ";
        count -= 2;
        if(count == 0) break;
        else if(num % 2 == 1 && count == 1) break;
    }
}
int main() {
    cin >> test;
    while(test--) {
        cin >> num;
        input();
        qsort(arr,num,sizeof(int), compare);
        output();
        cout << endl;
    }
}
