/*
[DP Basic]. Bài 6. Prime 3
Cho số nguyên dương N, hãy tính tích các số nguyên tố trong đoạn từ 0 đến N. Khi N = 0 hoặc 1 thì đáp án là 0.

Đầu vào:
-Dòng 1 là số bộ test T
-T dòng tiếp theo mỗi dòng là 1 số nguyên không âm N
Đầu ra:
-Đưa ra kết quả của mỗi test trên 1 dòng, vì kết quả quá lớn nên hãy chia dư cho 10^9 + 7.

Giới hạn
1<=T<=10000
0<=N<=10^6

Ví dụ :
Input 01
5
20
16
10
22
29
Output 01
9699690
30030
210
9699690
469693188
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const ll MOD = 1e9 + 7;

bool isPrime[1000001];
int primesProduct[1000001];

void sieveOfEratosthenes(){
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i <= 1e6; i++){
        isPrime[i] = true;
    }
    for (int i = 2; i <= sqrt(1e6); i++){
        if (isPrime[i]){
            for (int j = i * i; j <= 1e6; j += i){
                isPrime[j] = false;
            }
        }
    }
}

void generateMultiplyOfPrimes(){
    primesProduct[2] = 2;
    for (int i = 3; i <= 1e6; i++){
        if (isPrime[i]){
            primesProduct[i] = (primesProduct[i - 1] % MOD) * (i % MOD) % MOD;
        }
        else primesProduct[i] = primesProduct[i - 1];
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    sieveOfEratosthenes();
    generateMultiplyOfPrimes();
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        cout << primesProduct[n] << endl;
    }
    return 0;
}