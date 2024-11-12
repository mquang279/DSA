/*
[Cây Nhị Phân]. Bài 18. BST 3
Cho mảng số nguyên A[] có N phần tử, lần lượt thêm các phần tử trong mảng vào 
cây nhị phân sao cho cây nhị phân thu được là cây nhị phân tìm kiếm với gốc 
cây là A[0]. In ra thứ tự duyệt cây Postorder.

Đầu vào:
-Dòng đầu tiên là N : số lượng phần tử trong mảng A[]
-Dòng thứ 2 gồm N phần tử trong mảng A[]
Đầu ra:
-In ra thứ tự duyệt in Postorder của cây nhị phân tìm kiếm tạo được.

Giới hạn
1<=N<=1000
1<=x,y<=10000

Ví dụ :
Input 01:
7
7 3 5 8 6 2 4
Output 01:
2 4 6 5 3 8 7
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

node* insertNode(node* root, int data) {
    if (root == NULL) return new node(data);
    if (data < root->data) {
        root->left = insertNode(root->left, data);
    } else {
        root->right = insertNode(root->right, data);
    }
    return root;
}

void postorder(node* root) {
    if (root == NULL) return;
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
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
        root = insertNode(root, val);
    }
    postorder(root);
    return 0;
}