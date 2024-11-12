#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const ll MOD = 1e9 + 7;

struct matrix{
    int n;
    int a[50][50];
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
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> x.a[i][j];
        }
    }
    matrix tmp = powMod(x, k);
    ll res = 0;
    for (int i = 0; i < n; i++){
        res = ((res % MOD) + (tmp.a[i][n - 1] % MOD)) % MOD;
    }
    cout << res;
    return 0;
}