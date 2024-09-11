/*
[Thuật Toán Sinh]. Bài 9. Số thự tự tổ hợp
Cho các số tự nhiên từ 1 tới N và số nguyên K, bạn được cung cấp một cấu hình tập con K phần tử của N phần tử. 
Hãy xác định xem cấu hình này là cấu hình thứ bao nhiêu theo thứ tự ngược.

Đầu vào:
-Dòng đầu gồm 2 số nguyên dương N và K.
-Dòng thứ 2 gồm K số mô tả tổ hợp đã cho.
Đầu ra:
-In ra đáp án của bài toán

Giới hạn:
1<=K<=N<=15

Input 01:
12 4
8 9 10 11
Output 01:
5
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int n, k;
int a[16], b[16];
bool final = false;

void sinh(){
    int i = k - 1;
    while (i >= 0 && b[i] == n - k + 1 + i){
        i--;
    }
    if (i < 0){
        final = true;
        return;
    }
    b[i]++;
    i++;
    while (i < k){
        b[i] = b[i - 1] + 1; 
        i++;
    }
}

ll combination(int n, int k) {
    if (k > n) return 0;
    if (k == 0 || k == n) return 1;
    if (k > n - k) k = n - k; // C(n, k) == C(n, n-k)
    ll result = 1;
    for (int i = 0; i < k; ++i) {
        result *= (n - i);
        result /= (i + 1);
    }
    return result;
}



int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    cin >> n >> k;
    for (int i = 0; i < k; i++){
        cin >> a[i];
        b[i] = i + 1;
    }
    int cnt = 1;
    while (!final){
        bool check = true;
        for (int i = 0; i < k; i++){
            if (a[i] != b[i]){
                check = false;
                break;
            }
        }
        if (check){
            cout << combination(n, k) - cnt + 1;
            return 0;
        }
        sinh();
        cnt++;
    }
    return 0;
}