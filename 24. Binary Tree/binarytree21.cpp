/*
[Cây Nhị Phân]. Bài 21. Delete
Cho mảng số nguyên A[] có N phần tử, lần lượt thêm các phần tử trong mảng vào cây 
nhị phân sao cho cây nhị phân thu được là cây nhị phân tìm kiếm với gốc cây là A[0].
Nhiệm vụ của bạn là xóa node có giá trị X trên cây nhị phân tìm kiếm nếu tồn tại node có giá trị X.

Đầu vào:
-Dòng đầu tiên là N và X : số lượng phần tử trong mảng A[] và phần tử cần tìm kiếm
-Dòng thứ 2 gồm N phần tử trong mảng A[]
Đầu ra:
-In ra thứ tự duyệt cây Inorder sau khi xóa

Giới hạn
1<=N<=1000
1<=A[i], X<=10^6

Ví dụ :
Input 01:
8
8 7 5 6 2 4 1 3 
8
Output 01:
1 2 3 4 5 6 7
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

struct node{
    int data;
    node* left;
    node* right;
    node(int data) {
        this->data = data;
        left = right = NULL;
    }
};

node* addNode(node* root, int data) {
    if (root == NULL) return new node(data);
    if (data < root->data) {
        root->left = addNode(root->left, data);
    } else {
        root->right = addNode(root->right, data);
    }
    return root;
}

node* minNode(node* root) {
    while (root != NULL && root->left != NULL) {
        root = root->left;
    }
    return root;
}

node* deleteNode(node* root, int x) {
    if (root == NULL) return NULL;
    if (x < root->data) root->left = deleteNode(root->left, x);
    else if (x > root->data) root->right = deleteNode(root->right, x);
    else {
        if (root->left == NULL) {
            node* tmp = root->right;
            delete root;
            return tmp;
        } else if (root->right == NULL) {
            node* tmp = root->left;
            delete root;
            return tmp;
        } else {
            node* tmp = minNode(root->right);
            root->data = tmp->data;
            root->right = deleteNode(root->right, tmp->data);
        }
    }
    return root;
}

void inorder(node* root) {
    if (root == NULL) return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin >> n;
    node* root = NULL;
    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        root = addNode(root, val);
    }
    int x;
    cin >> x;
    root = deleteNode(root, x);
    inorder(root);
    return 0;
}