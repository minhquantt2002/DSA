#include <bits/stdc++.h>
using namespace std;
struct node {
    int data; 
    node *left, *right;
    node (int x) {
        data = x;
        left = right = NULL;
    }
};
void insert(node *root, int n1, int n2, char c) {
    if (root == NULL) return;
    if (root->data == n1) {
        if (c == 'L') root->left = new node(n2);
        if (c == 'R') root->right = new node(n2);
    } else {
        insert(root->left, n1, n2, c);
        insert(root->right, n1, n2, c);
    }
}
int is(node *root) {
    if (root == NULL) return 0;
    if (root->left == NULL && root->right == NULL) return 1;
    return is(root->left) + is(root->right);
}
int main() {
    int t; cin >> t;
    while (t--) {
        node *root = NULL;
        int n; cin >> n;
        while (n--) {
            int n1, n2; char c; cin >> n1 >> n2 >> c;
            if (root == NULL) {
                root = new node(n1);
                if (c == 'L') root->left = new node(n2);
                if (c == 'R') root->right = new node(n2);
            } else insert(root, n1, n2, c);
        }
        cout << ((is(root->left) == is(root->right)) ? "1\n" : "0\n");
    }
}
