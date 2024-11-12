/*
[DP Basic]. Bài 5. Prime 2
Cho 2 số nguyên L, R, hãy đếm xem trong đoạn từ L tới R có bao nhiêu số nguyên tố.

Đầu vào:
-Dòng 1 là số bộ test T
-T dòng tiếp theo mỗi dòng là 2 số nguyên không âm L, R
Đầu ra:
-Đưa ra kết quả của mỗi test trên 1 dòng

Giới hạn
1<=T<=10000
0<=L<=R<=10^6

Ví dụ :
Input 01
5
3 19
4 65
4 44
1 17
1 7
Output 01
7
16
12
7
4

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

void generateCountOfPrimes() {
    countOfPrimes[0] = countOfPrimes[1] = 0;
    for (int i = 2; i <= 1e6; i++) {
        if (isPrime[i]) {
            countOfPrimes[i] = countOfPrimes[i - 1] + 1;
        }
        else countOfPrimes[i] = countOfPrimes[i - 1];
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    sieveOfEratosthenes();
    generateCountOfPrimes();
    int t;
    cin >> t;
    while (t--){
        int start, end;
        cin >> start >> end;
        cout << countOfPrimes[end] - countOfPrimes[start - 1] << endl;
    }
    return 0;
}