#include<bits/stdc++.h>
using namespace std;
struct node {
    int data;
    node *left, *right;
    node (int x) {
        data = x;
        left = right = NULL;
    }
};
void levelOrder(node *root) {
    queue<node*> q;
    q.push(root);
    while (!q.empty()) {
        node *res = q.front(); q.pop();
        cout << res->data << " ";
        if (res->left != NULL) q.push(res->left);
        if (res->right != NULL) q.push(res->right);
    }
}
void makeNode(node *root, int x, int y, char c) {
    if (c == 'L') root->left = new node(y);
    else root->right = new node(y);
} 
void insert(node *root, int x, int y, char c) {
    if (root == NULL) return;
    if (root->data == x) makeNode(root, x, y, c);
    else {
        insert(root->left, x, y, c);
        insert(root->right, x, y, c);
    }
}
int main(){
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
        node *root = NULL;
        while (n--) {
            int x, y; char c; cin >> x >> y >> c;
            if (root == NULL) {
                root = new node(x);
                makeNode(root, x, y, c);
            } else insert(root, x, y, c);
        }
        levelOrder(root);
        cout << endl;
	}
}
