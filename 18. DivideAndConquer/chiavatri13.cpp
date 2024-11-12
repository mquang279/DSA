/*
[Chia Và Trị]. Bài 13. Dãy xâu nhị phân
Xâu nhị phân F được định nghĩa như sau :
F(1) = "0"
F(2) = "1"
F(n) = F(n - 2) + F(n - 1) trong đó phép + tương đương phép nối chuỗi.
Bạn hãy tìm kí tự thứ K trong xâu F(N)

Đầu vào:
1 Dòng duy nhất chứa 2 số nguyên N và K
Đầu ra:
In ra kí tự là đáp án của bài toán

Giới hạn
2<=N<=92
1<=K<=10^18

Ví dụ :
Input 01
7 7
Output 01
0
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

int find(int n, int k){
    if (n == 1) return 0;
    if (n == 2) return 1;
    if (k <= f[n - 2]) return find(n - 2, k);
    else return find(n - 1, k - f[n - 2]);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    generateFibo();
    int n, k;
    cin >> n >> k;
    cout << find(n, k);
    return 0;
}