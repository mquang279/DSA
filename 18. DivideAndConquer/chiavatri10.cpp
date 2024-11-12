/*
[Chia Và Trị]. Bài 10. Đếm số 0
Cho mảng A[] gồm N phần tử chỉ bao gồm các số 0 và 1. Các số 0 được đặt trước các số 1. 
Hãy đếm các số 0 với thời gian log(N).

Đầu vào:
-Dòng 1 chứa số nguyên dương N
-Dòng thứ 2 chứa N số nguyên của mảng A[]
Đầu ra:
-In ra đáp án của bài toán, nếu số 0 không xuất hiện in ra 0

Giới hạn
1<=N<=10^6
0<=A[i]<=1

Ví dụ :
Input 01
6
0 0 1 1 1 1
Output 01
2
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin >> n;
    int a[n];
    for (int &x : a) cin >> x;
    int left = 0, right = n - 1, pos = 0;
    while (left <= right){
        int mid = (left + right) / 2;
        if (a[mid] == 0){
            pos = mid;
            left = mid + 1;
        }
        else right = mid - 1;
    }
    cout << pos + 1;
    return 0;
}