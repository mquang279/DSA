/*
[Chia Và Trị]. Bài 2. Lũy thừa nhị phân đảo
Cho số nguyên dương N và M, trong đó M là số ngược của N, ví dụ N = 1234 thì M = 4321.
Bạn hãy tính N^M và chia dư kết quả cho 10^9 + 7

Đầu vào:
Dòng duy nhất chứa số nguyên dương N
Đầu ra:
In ra đáp án của bài toán

Giới hạn
1<=N<=10^16

Input 01
999995841
Output 01
987348397
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const ll MOD = 1e9 + 7;

ll powMod(ll n, ll k){
    if (k == 1) return n;
    ll x = powMod(n, k / 2);
    if (k % 2 == 0) return (x % MOD) * (x % MOD) % MOD;
    else return (((x % MOD) * (x % MOD) % MOD) * (n % MOD)) % MOD;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    ll n;
    cin >> n;
    string s = to_string(n);
    reverse(s.begin(), s.end());
    ll k = stoll(s);
    cout << powMod(n, k);
    return 0;
}