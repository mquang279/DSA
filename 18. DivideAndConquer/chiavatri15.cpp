/*
[Chia Và Trị]. Bài 15. Lũy thừa ma trận
Cho ma trận A[][] là ma trận vuông cỡ N x N. Hãy tính kết quả A^K và chia dư các phần tử trong ma trận kết quả cho 10^9 + 7

Đầu vào
-Dòng đầu tiên chứa 2 số nguyên dương N và K
-N dòng tiếp theo là các phần tử trong ma trận A
Đầu ra
-In ra ma trận đáp án

Giới hạn
1<=N<=10
1<=K<=10^9
0<=A[i][j]<=1000

Ví dụ :
Input 01
2 3
712 141 
55 619
Output 01
376787593 188740908 
73622340 252298909
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const ll MOD = 1e9 + 7;

struct matrix{
    int n;
    ll a[100][100];
    matrix() {
        memset(a, 0, sizeof(a));
    }
    matrix(int size){
        n = size;
    }
    friend matrix operator * (matrix x, matrix y){
        matrix res(x.n);
        for (int i = 0; i < x.n; i++){
            for (int j = 0; j < x.n; j++){
                for (int k = 0; k < x.n; k++){
                    res.a[i][j] += (x.a[i][k] % MOD) * (y.a[k][j] % MOD) % MOD;
                    res.a[i][j] %= MOD;
                }
            }
        }
        return res;
    }
};

matrix powMod(matrix x, int k){
    if (k == 1) return x;
    matrix tmp = powMod(x, k / 2);
    if (k % 2 == 0) return tmp * tmp;
    else return tmp * tmp * x;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n, k;
    cin >> n >> k;
    matrix x(n);
    for (int i = 0; i < x.n; i++){
        for (int j = 0; j < x.n; j++){
            cin >> x.a[i][j];
        }
    }
    matrix result = powMod(x, k);
    for (int i = 0; i < result.n; i++) {
        for (int j = 0; j < result.n; j++) {
            cout << result.a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}