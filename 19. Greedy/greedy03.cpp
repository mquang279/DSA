/*
[Tham Lam]. Bài 3. Tích lớn nhất
Cho mảng A[] gồm N phần tử, nhiệm vụ của bạn là sắp xếp lại dãy số này để 
tổng A[0] * 0 + A[1] * 1 + A[2] * 2 + ... + A[N - 1] * (N - 1) đạt giá trị lớn nhất.

Đầu vào:
-Dòng 1 là N
-Dòng 2 là N số trong mảng A[] viết cách nhau 1 dấu cách
Đầu ra:
-In ra kết quả lớn nhất đạt được sau khi chia dư cho 10^9 + 7

Giới hạn
1<=N<=10^6
1<=A[i]<=10^9

Ví dụ :
Input 01:
5 
1 1 2 1 3
Output 01:
21
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const ll MOD = 1e9 + 7;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin >> n;
    int a[n];
    for (int &x : a) cin >> x;
    ll res = 0;
    sort(a, a + n);
    for (int i = 0; i < n; i++){
        res = ((res % MOD) + ((a[i] % MOD) * (i % MOD) % MOD) % MOD) % MOD;
    }
    cout << res;
    return 0;
}