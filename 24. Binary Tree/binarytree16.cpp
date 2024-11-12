/*
[Cây Nhị Phân]. Bài 16. BST 1
Cho mảng số nguyên A[] có N phần tử, lần lượt thêm các phần tử trong mảng vào 
cây nhị phân sao cho cây nhị phân thu được là cây nhị phân tìm kiếm với gốc cây là A[0]. 
In ra thứ tự duyệt cây Inorder.

Đầu vào:
-Dòng đầu tiên là N : số lượng phần tử trong mảng A[]
-Dòng thứ 2 gồm N phần tử trong mảng A[]
Đầu ra:
-In ra thứ tự duyệt in order của cây nhị phân tìm kiếm tạo được.

Giới hạn
1<=N<=1000
1<=x,y<=10000

Ví dụ :
Input 01:
7
7 3 5 8 6 2 4
Output 01:
2 3 4 5 6 7 8
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

struct node {
    int data;
    node* left;
    node* right;
    
    node(int value) {
        data = value;
        left = NULL;
        right = NULL;
    }
};

node* addNode(node* root, int val) {
    if (root == NULL) return new node(val);
    if (val < root->data) {
        root->left = addNode(root->left, val);
    } else {
        root->right = addNode(root->right, val);
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
    inorder(root);
    return 0;
}