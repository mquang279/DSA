#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const ll MOD = 1e9 + 7;

bool isPrime(int a){
    for (int i = 2; i <= sqrt(a); i++){
        if (a % i == 0) return false;
    }
    return a >= 2;
}

ll DivisorsOfFactorial(int n){
    ll res = 1;
    for (int i = 2; i <= n; i++){
        if (isPrime(i)){
            // Legendre
            int tmp = 0;
            for (int j = i; j <= n; j *= i){
                tmp += n / j;
            }
            res = (res % MOD) * ((tmp + 1) % MOD) % MOD;
        }
    }
    return res;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin >> n;
    cout << DivisorsOfFactorial(n);
    return 0;
}