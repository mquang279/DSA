/*
[Chia Và Trị]. Bài 12. Số Fibonacci thứ N
Tìm số Fibonacci thứ N sau khi chia dư kết quả cho 10^9 + 7

Đầu vào:
-Dòng duy nhất chứa số nguyên dương N
Đầu ra:
-In ra đáp án của bài toán

Giới hạn:
1<=N<=10^16

Ví dụ :
Input 01:
58
Output 01:
286725742

*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const ll MOD = 1e9 + 7;

struct matrix {
    static const int SIZE = 2; 
    ll a[SIZE][SIZE];

    matrix() {
        memset(a, 0, sizeof(a));
    }

    matrix operator * (const matrix& other) const {
        matrix res;
        for (int i = 0; i < SIZE; i++) {
            for (int j = 0; j < SIZE; j++) {
                res.a[i][j] = 0;
                for (int k = 0; k < SIZE; k++) {
                    res.a[i][j] += (a[i][k] % MOD) * (other.a[k][j] % MOD) % MOD;
                    res.a[i][j] %= MOD;
                }
            }
        }
        return res;
    }
};

matrix powMod(matrix a, ll n){
    if (n == 1) return a;
    matrix tmp = powMod(a, n / 2);
    if (n % 2 == 0) return tmp * tmp;
    else return tmp * tmp * a;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    ll n;
    cin >> n;
    matrix matrix1;
    matrix1.a[0][0] = 1;
    matrix1.a[0][1] = 1;
    matrix1.a[1][0] = 1;
    matrix1.a[1][1] = 0;
    matrix res = powMod(matrix1, n);
    cout << res.a[1][0];
    return 0;
}