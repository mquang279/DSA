/*
[DP]. Bài 11. Xâu con chung dài nhất của 3 xâu
Cho ba xâu ký tự X, Y, Z. Nhiệm vụ của bạn là tìm độ dài dãy con chung dài nhất có mặt trong cả ba xâu.

Đầu vào:
3 dòng lần lượt chứa X, Y, Z
Đầu ra:
In ra độ dài của xâu con chung dài nhất của 3 xâu

Giới hạn
1<=len(X), len(Y), len(Z) <= 100

Ví dụ :
Input 01:
AGLEHHGE
GLGHLALB
DDLBLEHGD
Output 01:
2
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int dp[200][200][200];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    string x, y, z;
    cin >> x >> y >> z;
    x = " " + x;
    y = " " + y;
    z = " " + z;
    for (int i = 1; i < x.length(); i++) {
        for (int j = 1; j < y.length(); j++) {
            for (int k = 1; k < z.length(); k++) {
                if (x[i] == y[j] && y[j] == z[k]) {
                    dp[i][j][k] = dp[i - 1][j - 1][k - 1] + 1;
                }
                else dp[i][j][k] = max({dp[i][j - 1][k - 1], dp[i - 1][j][k - 1], dp[i - 1][j - 1][k], dp[i - 1][j][k], dp[i][j - 1][k], dp[i][j][k - 1]});
            }
        }
    }
    cout << dp[x.length() - 1][y.length() - 1][z.length() - 1];
    return 0;
}