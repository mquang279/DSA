/*
[Chia Và Trị]. Bài 5. Xâu Fibonacci
Xâu Fibonacci được định nghĩa :
F(1) = "A"
F(2) = "B"
F(n) = F(n - 2) + F(n - 1) trong đó phép + tương đương phép nối chuỗi
Một số xâu đầu tiên trong xâu Fibonacci : "A", "B", "AB", "BAB", "ABBAB"....
Bạn hãy in ra ký tự thứ K trong xâu Fibonacci thứ N

Đầu vào:
Dòng duy nhất chứa 2 số N và K
Đầu ra:
In ra đáp án tìm được

Giới hạn
1<=N<=92
1<=K<=10^18

Input 01
5 3
Output 01
B
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll f[93];

void generateFibo(){
    f[1] = f[2] = 1;
    for (int i = 3; i <= 92; i++){
        f[i] = f[i - 1] + f[i - 2];
    }
}

char find(int n, int k){
    if (n == 1) return 'A';
    if (n == 2) return 'B';
    if (k <= f[n - 2]) return find(n - 2, k);
    else return find(n - 1, k - f[n - 2]);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n, k;
    cin >> n >> k;
    generateFibo();
    cout << find(n, k);
    return 0;
}