/*
[DP]. Bài 12. Tổng lớn nhất của dãy con tăng dần
Cho dãy số A[] gồm N số.
Nhiệm vụ của bạn là tìm tổng lớn nhất của dãy con được sắp theo thứ tự tăng dần của dãy A[].
Ví dụ với dãy A[] = {1, 101, 2, 3, 100, 4, 5} ta có kết quả là 106 = 1 + 2 + 3 + 100.
Với dãy A[] = {10, 7, 5} ta có kết quả là 10. Với dãy A[] = {1, 2, 3, 5} ta có kết quả là 11

Đầu vào:
-Dòng đầu tiên đưa vào N là số phần tử của dãy A[]
-Dòng tiếp theo đưa vào N số A[i] các số được viết cách nhau một vài khoảng trống.
Đầu ra:
-Đưa ra kết quả của bài toán trên 1 dòng

Giới hạn:
1≤N≤1000
0≤A[i]≤1000.

Ví dụ :
Input 01
8
2 12 3 15 3 16 11 4
Output 01
45
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
    int dp[n];
    for (int i = 0; i < n; i++){
        dp[i] = 0;
        for (int j = 0; j < i; j++){
            if (a[i] > a[j]) dp[i] = max(dp[i], dp[j]);
        }
        dp[i] += a[i];
    }
    cout << *max_element(dp, dp + n);
    return 0;
}