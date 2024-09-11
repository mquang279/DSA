/*
[Quay Lui - Nhánh Cận]. Bài 6. N Queen
Cho một bàn cờ vua có kích thước N x N. Hãy đếm số cách đặt N quân hậu vào bàn cờ sao cho không có 2 con hậu nào ăn nhau.

Đầu vào:
-Dòng duy nhất chứa số nguyên dương N
Đầu ra:
-Kết quả của bài toán

Giới hạn:
2<=N<=12

Input 01:
8
Output 01:
92
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int n;
ll res;
int col[100], mainDiagonal[100], secondDiagonal[100];

void Try(int i){
    for (int j = 0; j < n; j++){
        if (col[j] == 0 && mainDiagonal[i - j + n] == 0 && secondDiagonal[i + j - 1] == 0){
            if (i == n - 1) res++;
            col[j] = mainDiagonal[i - j + n] = secondDiagonal[i + j - 1] = 1;
            Try(i + 1);
            col[j] = mainDiagonal[i - j + n] = secondDiagonal[i + j - 1] = 0;
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    cin >> n;
    Try(0);
    cout << res;
    return 0;
}