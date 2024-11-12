/*
[DP]. Bài 8. Bài toán cái túi
Một tên trộm có 1 cái túi có thể mang các đố vật với trọng lượng tối đa là V.
Hiện tại tên trộm muốn lựa chọn các đồ vật trong N đồ vật để ăn trộm, 
mỗi đồ vật có trọng lượng là w[i] và giá trị là v[i].
Hãy xác định tổng giá trị lớn nhất của các đồ vật mà tên trộm này lựa chọn 
sao cho trọng lượng của chúng không vượt quá V.

Đầu vào:
-Dòng đầu ghi 2 số N và V.
-Dòng 2 ghi N số của mảng w.
-Dòng 3 ghi N số của mảng v.
Đầu ra:
-In ra giá trị lớn nhất có thể đạt được.

Giới hạn:
V<=1000
N≤1000
1<=w[i], c[i]<=500

Ví dụ:
Input 01:
6 22
39 44 4 59 91 70 
47 26 92 33 6 69
Output 01:
92
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n, maxWeight;
    cin >> n >> maxWeight;
    int weight[n], value[n];
    for (int i = 0; i < n; i++){
        cin >> weight[i];
    }
    for (int i = 0; i < n; i++){
        cin >> value[i];
    }
    int dp[maxWeight + 1] = {-1};
    dp[0] = 0;
    for (int i = 0; i < n; i++){
        for (int j = maxWeight; j >= weight[i]; j--){
            if (dp[j - weight[i]] != -1){
                dp[j] = max(dp[j], dp[j - weight[i]] + value[i]);
            }
        }
    }
    cout << *max_element(dp, dp + maxWeight + 1);
    return 0;
}