/*
[Cây Nhị Phân]. Bài 22. Preorder to postorder
Cho thứ tự duyệt Preorder của cây nhị phân tìm kiếm, hãy in ra thứ tự duyệt postorder.

Đầu vào:
-Dòng đầu tiên là N : số lượng node trên cây
-Dòng thứ 2 là các node theo thứ tự duyệt preorder.
Đầu ra:
-In ra thứ tự duyệt postorder.

Giới hạn
1<=N<=1000
Các node có giá trị dương <= 10^6

Ví dụ :
Input 01:
8
8 7 5 2 1 4 3 6
Output 01:
1 3 4 2 6 5 7 8
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
        root = addNode(root, val);
    }
    postorder(root);
    return 0;
}