/*
[Tham Lam]. Bài 4. Chia mảng
Cho mảng A[] gồm N phần tử và số nguyên K, bạn hãy chia mảng thành 2 tập con 
(không cần liên tiếp) có K và N - K phần tử sao cho độ chênh lệch giữa tổng 
của 2 tập con là lớn nhất có thể.

Đầu vào:
-Dòng 1 chứa 2 số nguyên N và K
-Dòng thứ 2 gồm N số của mảng A[]
Đầu ra:
-In ra đáp án của bài toán

Giới hạn:
1<=K<=N<=10^6
0<=A[i]<=10^9

Ví dụ :
Input 01
5 3
2 8 9 1 3
Output 01
17
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n, k;
    cin >> n >> k;
    k = min(k, n - k);
    int a[n];
    for (int &x : a) cin >> x;
    ll sum1 = 0, sum2 = 0;
    sort(a, a + n);
    for (int i = 0; i < n; i++){
        if (i < k) sum1 += a[i];
        else sum2 += a[i];
    }
    cout << abs(sum2 - sum1);
    return 0;
}