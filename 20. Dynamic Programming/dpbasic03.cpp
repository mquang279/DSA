/*
[DP Basic]. Bài 3. Tribonacci
Cho dãy số Tribonacci với F[0] = 0, F[1] = 0, F[2] = 1, F[n] = F[n - 1] + F[n - 2] + F[n - 3] với n >= 3.
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
7
8
14
12
7
9
7
12
Output 01
24
927
274
13
44
13
274
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const ll MOD = 1e9 + 7;

ll tribo[1000001];

void generateTribo(){
    tribo[0] = tribo[1] = 0;
    tribo[2] = 1;
    for (int i = 3; i <= 1e6; i++){
        tribo[i] = (tribo[i - 1] + tribo[i - 2] + tribo[i - 3]) % MOD;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    generateTribo();
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        cout << tribo[n] << endl;
    }
    return 0;
}