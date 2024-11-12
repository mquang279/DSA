/*
[Cây Nhị Phân]. Bài 20. Search
Cho mảng số nguyên A[] có N phần tử, lần lượt thêm các phần tử trong mảng vào 
cây nhị phân sao cho cây nhị phân thu được là cây nhị phân tìm kiếm với gốc cây là A[0].
Nhiệm vụ của bạn là tìm kiếm sự xuất hiện của phần tử có giá trị X trên cây nhị phân tìm kiếm.

Đầu vào
Dòng đầu tiên là N và X : số lượng phần tử trong mảng A[] và phần tử cần tìm kiếm
Dòng thứ 2 gồm N phần tử trong mảng A[]

Giới hạn
1<=N<=1000

1<=A[i], X<=10^6

Đầu ra
In YES nếu X xuất hiện trên cây ngược lại in ra NO

Ví dụ :
Input 01
Copy
8
8 7 5 6 2 4 1 3
Output 01
Copy
8 1
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

struct node {
    int data;
    node* left;
    node* right;
    node (int data) {
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

bool search(node* root, int x) {
    if (root == NULL) return false;
    if (root->data == x) return true;
    if (x < root->data) {
        return search(root->left, x);
    } else {
        return search(root->right, x);
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n, x;
    cin >> n;
    node* root = NULL;
    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        root = addNode(root, val);
    }
    cin >> x;
    if (search(root, x)) cout << "YES";
    else cout << "NO";
    return 0;
}