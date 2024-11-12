/*
[DP Basic]. Bài 1. Giai thừa chia dư
Đề bài rất đơn giản, bạn hãy tính N! chia dư cho (10^9 + 7).

Đầu vào:
-Dòng 1 là số bộ test T
-T dòng tiếp theo mỗi dòng là 1 số nguyên không âm N
Đầu ra:
-Đưa ra kết quả của mỗi test trên 1 dòng

Giới hạn
1<=T<=10000
0<=N<=10^6

Ví dụ :
Input 01:
5
11
6
8
10
13
Output 01:
39916800
720
40320
3628800
227020758
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const ll MOD = 1e9 + 7;

ll factorial[1000001];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    factorial[0] = 1;
    for (int i = 1; i <= 1e6; i++){
        factorial[i] = (factorial[i - 1] % MOD) * (i % MOD) % MOD;
    }
    int t;
    cin >> t;
    while (t--){
        int tmp;
        cin >> tmp;
        cout << factorial[tmp] << endl;
    }
    return 0;
}