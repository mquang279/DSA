/*
[DP]. Bài 2. Dãy con tăng dài nhất LIS
Cho mảng số nguyên A[] gồm N phần tử, hãy tìm dãy con tăng dài nhất của mảng A.

Đầu vào:
-Dòng đầu tiên là N
-Dòng thứ 2 gồm N phần tử của mảng A
Đầu ra:
-In ra độ dài của dãy con tăng dài nhất

Giới hạn
1<=N<=1000
1<=A[i]<=1000

Ví dụ :
Input 01:
10
1 1 3 4 2 4 5 5 1 2
Output 01:
4
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
        dp[i] = 1;
        for (int j = 0; j < i; j++){
            if (a[i] > a[j]){
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
    }
    cout << *max_element(dp, dp + n);
    return 0;
}