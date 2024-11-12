/*
[DP]. Bài 13. Dãy số bitonic
Một dãy số được gọi là Bitonic nếu nó được chia thành hai dãy đầu 
tăng dần và dãy tiếp theo giảm dần.
Nhiệm vụ của bạn là tìm tổng lớn nhất dãy con Bitonic của dãy số A[].
Ví dụ với dãy A[] = {1, 15, 51, 45, 33, 100, 12, 18, 9} ta có kết quả 
là 194 tương ứng với dãy Bi-tonic {1, 15, 51, 100, 18, 9}.

Đầu vào:
-Dòng đầu tiên đưa vào N là số phần tử của dãy A[]
-Dòng tiếp theo đưa vào N số A[i] các số được viết 
cách nhau một vài khoảng trống
Đầu ra:
-In ra kết quả của bài toán

Giới hạn
1<=N<=100
1<=A[i]<=100

Ví dụ :
Input 01
8
7 8 8 19 3 6 2 15
Output 01
49
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
    int sumFromLeft[n + 5] = {0};
    for (int i = 0; i < n; i++){
        sumFromLeft[i] = a[i];
        for (int j = 0; j < i; j++){
            if (a[i] > a[j]){
                sumFromLeft[i] = max(sumFromLeft[i], sumFromLeft[j] + a[i]);
            }
        }
    }
    int sumFromRight[n + 5] = {0};
    for (int i = n - 1; i >= 0; i--){
        sumFromRight[i] = a[i];
        for (int j = n - 1; j > i; j--){
            if (a[i] > a[j]){
                sumFromRight[i] = max(sumFromRight[i], sumFromRight[j] + a[i]);
            }
        }
    }
    int res = 0;
    for (int i = 0; i < n; i++){
        res = max(res, sumFromRight[i] + sumFromLeft[i] - a[i]);
    }
    cout << res;
    return 0;
}