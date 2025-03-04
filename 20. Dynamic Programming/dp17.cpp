/*
[DP]. Bài 17. Coin 3
-Hãy xem xét một hệ thống tiền tệ của ngân hàng ABC bao gồm n đồng xu. 
Mỗi đồng xu có một giá trị nguyên dương.
-Nhiệm vụ của bạn là tính số cách riêng biệt không xét đến thứ tự mà bạn 
có thể tạo ra số tiền x bằng cách sử dụng số tiền có sẵn.
Ví dụ: nếu số xu là {2,3,5} và tổng mong muốn là 9, có 3 cách: 
2 + 2 + 5; 3 + 3 + 3; 2 + 2 + 2 + 3;

Đầu vào:
-Dòng nhập đầu tiên có hai số nguyên n và x: số xu và số tiền mong muốn.
-Dòng thứ hai có n số nguyên phân biệt c1, c2,…, cn: giá trị của mỗi đồng xu.
Đầu ra:
-In ra kết quả lấy dư với 10^9 + 7

Giới hạn
1≤n≤100
1≤x≤10^6
1≤ci≤10^6

Ví dụ :
Input 01:
3 9
2 3 5
Output 01:
3
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const ll MOD = 1e9 + 7;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n, x;
    cin >> n >> x;
    int a[n];
    for (int &x : a) cin >> x;
    int dp[x + 1] = {0};
    dp[0] = 1;
    for (int i = 0; i < n; i++){
        for (int j = a[i]; j <= x; j++){
            dp[j] += dp[j - a[i]];
            dp[j] %= MOD;
        }
    }
    cout << dp[x];
    return 0;
}