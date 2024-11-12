/*
[DP]. Bài 3. Số bước ít nhất
Cho mảng A[] gồm N số nguyên. Nhiệm vụ của bạn là sắp xếp lại mảng sao cho mảng tăng dần với số bước di chuyển ít nhất.
Mỗi bước di chuyển bạn được phép lựa chọn 1 phần tử trong mảng chèn nó vào 1 vị trí bất kỳ trong mảng.

Đầu vào:
-Dòng đầu tiên là N
-Dòng thứ 2 gồm N phần tử của mảng A
Đầu ra:
-Đưa ra kết quả trên 1 dòng.

Giới hạn
1<=N<=1000
1<=A[i]<=1000

Ví dụ :
Input 01
6
1 2 4 5 0 3
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
    int dp[n];
    // Số cách di chuyển ít nhất chính là số phần tử trong mảng - dãy con tăng dài nhất
    for (int i = 0; i < n; i++){
        dp[i] = 1;
        for (int j = 0; j < i; j++){
            if (a[i] > a[j]){
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
    }
    cout << n - *max_element(dp, dp + n);
    return 0;
}