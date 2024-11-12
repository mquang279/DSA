/*
[Chia Và Trị]. Bài 14. Dãy số vô hạn
Dãy số nguyên dương vô hạn A[] được định nghĩa một cách đệ quy như sau:
A[0] = 0; A[1] = 1; A[i] = A[i-1] + A[i-2] với mọi n ≥ 2.
Cho số nguyên dương N không quá 10^9. Hãy xác định số thứ N trong dãy A[].

Đầu vào:
-Dòng duy nhất chứa số nguyên dương N
Đầu ra:
-In ra đáp án của bài toán sau khi chia dư cho 10^9 + 7

Giới hạn:
1<=N<=10^9

Ví dụ :
Input 01
999992343
Output 01
865905443
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const ll MOD = 1e9 + 7;

struct matrix{
    ll a[2][2];
    matrix() {
        memset(a, 0, sizeof(a));
    }
    friend matrix operator * (matrix x, matrix y){
        matrix res;
        for (int i = 0; i < 2; i++){
            for (int j = 0; j < 2; j++){
                for (int k = 0; k < 2; k++){
                    res.a[i][j] += (x.a[i][k] % MOD) * (y.a[k][j] % MOD) % MOD;
                    res.a[i][j] %= MOD;
                }
            }
        }
        return res;
    }
};

matrix powMod(matrix x, int n){
    if (n == 1) return x;
    matrix tmp = powMod(x, n / 2);
    if (n % 2 == 0) return tmp * tmp;
    else return tmp * tmp * x;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin >> n;
    matrix x;
    x.a[0][0] = 1;
    x.a[0][1] = 1;
    x.a[1][0] = 1;
    x.a[1][1] = 0;
    x = powMod(x, n);
    cout << x.a[1][0];
    return 0;
}