/*
[Cây Nhị Phân]. Bài 19. Max min BST
Cho mảng số nguyên A[] có N phần tử, lần lượt thêm các phần tử trong mảng vào 
cây nhị phân sao cho cây nhị phân thu được là cây nhị phân tìm kiếm với gốc cây là A[0].
Tìm phần tử có giá trị lớn nhất và nhỏ nhất trên cây nhị phân tìm kiếm.

Đầu vào:
-Dòng đầu tiên là N : số lượng phần tử trong mảng A[]
-Dòng thứ 2 gồm N phần tử trong mảng A[]
Đầu ra:
-In ra giá trị lớn nhất, nhỏ nhất của cây nhịp phân tìm kiếm

Giới hạn
1<=N<=1000
1<=x,y<=10000

Ví dụ :
Input 01:
8
8 7 5 6 2 4 1 3
Output 01:
8 1
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

int minVal(node* root) {
    if (root->left == NULL) return root->data;
    return minVal(root->left);
}

int maxVal(node* root) {
    if (root->right == NULL) return root->data;
    return maxVal(root->right);
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
    cout << maxVal(root) << " " << minVal(root);
    return 0;
}