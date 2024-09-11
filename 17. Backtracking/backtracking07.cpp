/*
[Quay Lui - Nhánh Cận]. Bài 7. N Queen 2
Cho một bàn cờ 8 x 8, mỗi ô có một giá trị A[i][j], tương ứng với điểm số đạt được nếu 
như bạn đặt một quân cờ vào đó. Nhiệm vụ của bạn là đặt 8 quân hậu lên bàn cờ, sao cho 
không có 2 quân nào ăn nhau, và số điểm đạt được là lớn nhất.

Đầu vào:
-Gồm 8 dòng, mỗi dòng gồm 8 số tương ứng với các số trên bàn cờ.
Đầu ra:
-In ra số điểm đạt được lớn nhất.

Input 01:
12 29 80 91 56 46 97 13 
54 88 27 84 85 9 32 77 
48 80 88 74 30 77 38 98 
6 82 20 95 7 86 12 43 
100 82 15 7 95 9 5 84 
51 40 65 98 86 38 30 63 
96 78 98 76 33 11 2 58 
33 51 35 68 62 87 67 39
Output 01:
653
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int n = 8;
ll res, sum;
int a[8][8];
int col[100], mainDiagonal[100], secondDiagonal[100];

void Try(int i){
    for (int j = 0; j < n; j++){
        if (col[j] == 0 && mainDiagonal[i - j + n] == 0 && secondDiagonal[i + j - 1] == 0){
            sum += a[i][j];
            if (i == n - 1) res = max(res, sum);
            col[j] = mainDiagonal[i - j + n] = secondDiagonal[i + j - 1] = 1;
            Try(i + 1);
            col[j] = mainDiagonal[i - j + n] = secondDiagonal[i + j - 1] = 0;
            sum -= a[i][j];
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }
    Try(0);
    cout << res;
    return 0;
}