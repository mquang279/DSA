/*
[Chia Và Trị]. Bài 11. Tìm kiếm nhị phân
Cho dãy A[] gồm N phần tử đã được sắp xếp và số nguyên dương K. Hãy kiểm tra xem K có xuất hiện trong mảng hay không, nếu có in ra YES, ngược lại in ra NO

Đầu vào:
-Dòng 1 chứa 2 số N và K
-Dòng 2 chứa N số nguyên của mảng A[]
Đầu ra:
-In ra đáp án của bài toán

Giới hạn
1<=N<=10^5
1<=A[i], K<=10^6

Ví dụ :
Input 01
6 4
4 8 9 16 19 20
Output 01
YES
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int &x : a) cin >> x;
    int left = 0, right = n - 1;
    while (left <= right){
        int mid = (right + left) / 2;
        if (a[mid] == k){
            cout << "YES";
            return 0;
        }
        else if (a[mid] < k) left = mid + 1;
        else right = mid - 1;
    }
    cout << "NO";
    return 0;
}