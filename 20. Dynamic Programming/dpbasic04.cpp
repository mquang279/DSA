/*
[DP Basic]. Bài 4. Prime 1
Cho số nguyên dương N, hãy đếm xem trong đoạn từ 0 tới N có bao nhiêu số nguyên tố.

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
5
39
68
26
87
6
Output 01
12
19
9
23
3
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int countOfPrimes[1000001];
bool isPrime[1000001];

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

void generateCountOfPrimes(){
    countOfPrimes[0] = countOfPrimes[1] = 0;
    for (int i = 2; i <= 1e6; i++){
        if (isPrime[i]){
            countOfPrimes[i] = countOfPrimes[i - 1] + 1;
        }
        else countOfPrimes[i] = countOfPrimes[i - 1];
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    sieveOfEratosthenes();
    generateCountOfPrimes();
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        cout << countOfPrimes[n] << endl;
    }
    return 0;
}