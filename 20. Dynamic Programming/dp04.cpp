/*
[DP]. Bài 4. Dãy con có tổng bằng S
Cho mảng số nguyên A[] gồm N phần tử và số nguyên dương S, nhiệm vụ của bạn hãy xác định 
xem có thể tạo ra một tập con các phần tử trong mảng có tổng bằng S hay không?
Chú ý mỗi phần tử trong mảng chỉ được sử dụng một lần.

Đầu vào:
-Dòng đầu tiên gồm 2 số N và S
-Dòng thứ 2 gồm N số của mảng A
Đầu ra:
-In ra 1 nếu có tập con của A[] có tổng bằng S, ngược lại in ra 0

Giới hạn
1<=N<=200
1<=S<=50000
1<=A[i]<=500

Ví dụ :
Input 01:
5 10
2 2 1 6 3
Output 01:
1
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int dp[1000001];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n, s;
    cin >> n >> s;
    int a[n];
    for (int &x : a) cin >> x;
    dp[0] = 1;
    for (int i = 0; i < n; i++){
        for (int j = s; j >= a[i]; j--){
            if (dp[j - a[i]] != 0){
                dp[j] = 1;
            }
        }
    }
    cout << dp[s] << endl;
    return 0;
}