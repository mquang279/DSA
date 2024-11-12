/*
[Chia Và Trị]. Bài 6. Dãy con tổng lớn nhất
Cho dãy số nguyên A[] gồm N phần tử, bạn hãy là tính tổng của dãy con liên tiếp có tổng lớn nhất.

Đầu vào:
-Dòng đầu tiên chứa số nguyên dương N
-Dòng thứ 2 chứa N số nguyên của dãy A[]
Đầu ra:
-In ra đáp án của bài toán

Giới hạn
1<=N<=10^5
1<=abs(A[i])<=10^6

Ví dụ :
Input 01
5
-3 6 1 -3 6
Output 01
10
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin >> n;
    ll a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    ll sum = a[0];
    ll res = a[0];
    for (int i = 1; i < n; i++){
        sum = max(a[i], sum + a[i]);
        res = max(res, sum);
    }
    cout << res;
    return 0;
}