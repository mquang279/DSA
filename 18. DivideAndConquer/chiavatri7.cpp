/*
[Chia Và Trị]. Bài 7. Ceiling
Cho mảng A[] gồm N phần tử đã được sắp xếp theo thứ tự tăng dần và số nguyên X, 
bạn hãy tìm số lớn nhất không vượt quá X nằm trong mảng A[].

Đầu vào:
-Dòng 1 chứa 2 số N và X
-Dòng 2 chứa N số của mảng A[]
Đầu ra:
-In ra đáp án của bài toán nếu tìm thấy số lớn hơn X, trường hợp không tìm thấy in -1

Giới hạn:
1<=N<=10^5
1<=X,A[i]<=10^6

Input 01:
9 8
1 2 3 4 5 6 7 8 9
Output 01:
8
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n, x;
    cin >> n >> x;
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    int left = 0, right = n - 1, res = -1;
    while (left <= right){
        int mid = (left + right) / 2;
        if (a[mid] <= x){
            res = a[mid];
            left = mid + 1;
        }
        else right = mid - 1;
    }
    cout << res;
    return 0;
}