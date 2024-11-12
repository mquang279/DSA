/*
[Chia Và Trị]. Bài 1. Lũy thừa nhị phân
Cho 2 số nguyên N và K bạn hãy tính N^K, kết quả được chia dư với 10^9 + 7

Đầu vào:
Dòng duy nhất chứa 2 số N và K
Đầu ra:
Kết quả của bài toán

Giới hạn
1<=N<=10^6
1<=K<=10^9

Input 01:
994402 999992619
Output 01:
925329307
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const ll MOD = 1e9 + 7;

ll powMod(int n, int k){
    if (k == 1) return n;
    ll x = powMod(n, k / 2);
    if (k % 2 == 0) return ((x % MOD) * (x % MOD)) % MOD;
    else return (((x % MOD) * (x % MOD) % MOD) * (n % MOD)) % MOD;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n, k;
    cin >> n >> k;
    cout << powMod(n, k);
    return 0;
}