/*
[DP]. Bài 14. Xúc xắc
- Tèo hiện đang học sinh lớp 10A1, vốn là một học sinh được đánh giá rất cao về 
khả năng toán học nên Tèo thường được các bạn trong lớp nhờ giải các bài toán 
trên tạp chí toán học và tuổi trẻ.
- Hôm nay Tí là bạn thân của Tèo gặp một bài toán trên tạp chí và đã nhờ Tèo giải hộ,
Tèo dù rất giỏi toán và biết cách làm bài này nhưng bài toán này kết quả quá lớn nên 
Tèo phải nhờ tới bạn lập trình thuật toán để tìm ra lời giải giúp Tèo.
- Bài toán có yêu cầu rất đơn giản, cho ngẫu nhiên số N, hỏi rằng nếu được tung 
một con xúc xắc không giới hạn số lần và lấy tổng số chấm trên mặt xúc xắc cộng 
lại với nhau, hỏi có bao nhiêu cách tung để tổng số chấm trong mọi lần tung xúc 
xắc bằng N. Bạn hãy giúp Tèo giải quyết bài toán này nhé, vì số cách tung có thể 
quá lớn, nên bạn hãy chia dư kết quả với modulo 10^9 + 7

Đầu vào:
-Dòng duy nhất chứa số nguyên dương N
Đầu ra:
-Kết quả của bài toán

Giới hạn
1<=N<=10^6

Ví dụ :
Input 01
7
Output 01
63
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
    int dp[n + 1] = {0};
    dp[0] = 1;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= 6; j++){
            if (i - j >= 0){
                dp[i] += dp[i - j];
                dp[i] %= MOD;
            }
        }
    }
    cout << dp[n];
    return 0;
}