/*
[Cây Nhị Phân]. Bài 23. Check BST
Cho thự tự duyệt Inorder của một cây nhị phân, hãy xác định xem thứ tự này có 
phải là thứ tự duyệt inorder của một cây nhị phân tìm kiếm hay không.

Đầu vào:
-Dòng đầu tiên là N : số lượng node trên cây
-Dòng thứ 2 gồm N node theo thứ tự duyệt inorder
Đầu ra:
-In ra YES nếu cây nhị phân đã cho là cây nhị phân tìm kiếm, ngược lại in ra NO.

Giới hạn
1<=N<=1000
Các node có giá trị dương <= 10^6

Ví dụ :
Input 01:
8
1 3 5 7 9 11 14 16
Output 01:
YES
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

bool compareArray(int a[], int b[], int n) {
    for (int i = 0; i < n; i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin >> n;
    int a[n], b[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        b[i] = a[i];
    }
    sort(b, b + n);
    if (compareArray(a, b, n)) cout << "YES";
    else cout << "NO";
    return 0;
}