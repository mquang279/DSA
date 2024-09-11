/*
    [Thuật Toán Sinh]. Bài 3. Next permutation
    Cho hoán vị của N số tự nhiên từ 1 đến N, bạn hãy in ra hoán vị kế tiếp của hoán vị hiện tại theo 
    thuật toán sinh kế tiếp. Nếu hoán vị đang có là hoán vị cuối cùng thì sẽ in ra hoán vị đầu tiên.

    Đầu vào:
    -Dòng 1 là N
    -Dòng 2 là N số trong cấu hình
    Đầu ra:
    -In ra hoán vị kế tiếp

    Giới hạn:
    1<=N<=10^4

    Input 01:
    5
    1 2 3 4 5
    Output 01:
    1 2 3 5 4
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int n;
int a[10001];

void sinh(){
    int i = n - 2;
    while (i >= 0 && a[i] > a[i + 1]){
        i--;
    }
    if (i < 0){
        for (int i = 0; i < n; i++){
            a[i] = i + 1;
        }
        return;
    }
    int j = n - 1;
    while (j > i && a[j] < a[i]){
        j--;
    }
    swap(a[i], a[j]);
    reverse(a + i + 1, a + n);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    sinh();
    for (int i = 0; i < n; i++) cout << a[i] << " ";
    return 0;
}