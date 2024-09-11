/*
[Quay Lui - Nhánh Cận]. Bài 10. Người du lịch
Cho n thành phố đánh số từ 1 đến n và các tuyến đường giao thông hai chiều giữa chúng, 
mạng lưới giao thông này được cho bởi mảng C[1…n, 1…n] ở đây C[i][j] = C[j][i] là chi 
phí đi đoạn đường trực tiếp từ thành phố i đến thành phố j. Một người du lịch xuất phát 
từ thành phố 1, muốn đi thăm tất cả các thành phố còn lại mỗi thành phố đúng 1 lần và 
cuối cùng quay lại thành phố 1. Hãy chỉ ra chi phí ít nhất mà người đó phải bỏ ra.

Đầu vào:
-Dòng đầu tiên là số nguyên n – số thành phố
-n dòng sau, mỗi dòng chứa n số nguyên thể hiện cho mảng 2 chiều C.
Đầu ra:
-In ra chi phí mà người đó phải bỏ ra

Input 01:
4
0 85 26 81 
85 0 77 97 
26 77 0 26 
81 97 26 0
Output 01:
234
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int n, sum, res = INT_MAX;
int a[100][100], visited[20];

void Try(int i, int cnt){
    if (cnt == n - 1){
        res = min(sum + a[i][0], res);
        return;
    }
    if (sum >= res) return;
    for (int j = 0; j < n; j++){
        if (i != j && visited[j] == 0){
            sum += a[i][j];
            visited[j] = 1;
            Try(j, cnt + 1);
            sum -= a[i][j];
            visited[j] = 0;
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    cin >> n;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }
    visited[0] = 1;
    Try(0, 0);
    cout << res;
    return 0;
}