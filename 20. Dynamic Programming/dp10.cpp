/*
[DP]. Bài 10. Tổng không liền kề
Cho mảng A[] gồm N phần tử, nhiệm vụ của bạn là tính tổng lớn nhất của 
dãy con trong mảng với một điều kiện đó là trong dãy con này không được 
có 2 phần tử nằm liền kề nhau.

Đầu vào:
-Dòng đầu tiên là N : số lượng phần tử trong mảng
-Dòng thứ 2 là A[i]
Đầu ra:
-In ra kết quả của bài toán

Giới hạn
1<=N<=10^6
1<=A[i]<=1000

Ví dụ :
Input 01:
4
2 1 8 10
Output 01:
12
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int dp[1000001];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin >> n;
    int a[n];
    for (int &x : a) cin >> x;
    set<int> se;
    se.insert(a[0]);
    dp[0] = a[0];
    for (int i = 1; i < n; i++){
        if (i == 1){
            se.insert(a[i]);
            dp[i] = a[i];
        }else{
            se.erase(dp[i - 1]);
            dp[i] = a[i] + *se.rbegin();
            se.insert(dp[i]);
            se.insert(dp[i - 1]);
        }
    }
    cout << *se.rbegin();
    return 0;
}
