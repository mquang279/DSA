/*
[DP]. Bài 1. Xâu con chung dài nhất LCS
Cho 2 xâu kí tự S và T, hãy tìm độ dài xâu con chung dài nhất của S và T.
Xâu con chung của S và T không cần phải là xâu con liên tiếp

Đầu vào:
-Dòng đầu tiên là xâu S
-Dòng thứ 2 là xâu T
Đầu ra:
-In ra đáp án của bài toán

Giới hạn
1<=len(S), len(T)<=1000

Ví dụ :
Input 01
ZHFTDFHF
TFISHROV
Output 01
3
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int dp[1001][1001];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    string s, t;
    cin >> s >> t;
    dp[0][0] = 0;
    for (int i = 0; i < s.length(); i++){
        for (int j = 0; j < t.length(); j++){
            if (s[i] == t[j]){
                dp[i + 1][j + 1] = dp[i][j] + 1;
            }
            else{ 
                dp[i + 1][j + 1] = max(dp[i + 1][j], dp[i][j + 1]);
            }
        }
    }
    cout << dp[s.length()][t.length()];
    return 0;
}