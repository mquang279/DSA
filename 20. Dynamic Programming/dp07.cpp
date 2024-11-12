/*
[DP]. Bài 7. Xem phim
John có một đàn bò. Một ngày đẹp trời, anh ta quyết định mua xe tải với 
khả năng chở được C kg (1000 ≤ C ≤ 25000) để đưa những con bò đi xem phim. 
Cho số con bò là N (20 ≤ N ≤ 100) và khối lượng w[i] của từng con (đều nhỏ hơn C), 
hãy cho biết khối lượng bò lớn nhất mà John có thể đưa đi xem phim là bao nhiêu.

Đầu vào:
-Dòng 1 là 2 số nguyên C và N cách nhau bởi dấu cách
-Dòng 2 lần lượt các số nguyên : w[i]
Đầu ra:
-Một số nguyên là tổng khối lượng bò lớn nhất mà John có thể mang đi xem phim.

Giới hạn
1000 ≤ C ≤ 25000
20 ≤ N ≤ 100
w[i] <= C

Ví dụ :
Input 01:
259 5
81 58 42 33 61
Output 01:
242
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int c, n;
    cin >> c >> n;
    int weight[n];
    int dp[c + 1] = {0};
    for (int i = 0; i < n; i++){
        cin >> weight[i];
    }
    dp[0] = 1;
    for (int i = 0; i < n; i++){
        for (int j = c; j >= weight[i]; j--){
            if (dp[j - weight[i]] != 0) dp[j] = 1;
        }
    }
    for (int i = c; i >= 0; i--){
        if (dp[i] == 1){
            cout << i;
            return 0;
        }
    }
    return 0;
}