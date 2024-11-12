/*
[DP Basic]. Bài 2. Fibonacci
Cho dãy số Fibonacci với F[0] = 0, F[1] = 1, F[n] = F[n - 1] + F[n - 2] với n >= 2.
Hãy tính F[n] chia dư cho 10^9 + 7.

Đầu vào:
-Dòng 1 là số bộ test T
-T dòng tiếp theo mỗi dòng là 1 số nguyên không âm N
Đầu ra:
-Đưa ra kết quả của mỗi test trên 1 dòng

Giới hạn
1<=T<=10000
0<=N<=10^6

Ví dụ :
Input 01
6
5
13
10
14
8
11
Output 01
5
233
55
377
21
89
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const ll MOD = 1e9 + 7;

ll fibo[1000001];

void generateFibo(){
    fibo[0] = 0;
    fibo[1] = 1;
    for (int i = 2; i <= 1e6; i++){
        fibo[i] = (fibo[i - 1] % MOD) + (fibo[i - 2] % MOD);
        fibo[i] %= MOD;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    generateFibo();
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        cout << fibo[n] << endl;
    }
    return 0;
}