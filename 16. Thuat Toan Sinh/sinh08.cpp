/*
[Thuật Toán Sinh]. Bài 8. Số thứ tự hoán vị
Cho số tự nhiên N và các số từ 1 tới N, bạn được cung cấp một hoán vị của N phần tử các số từ 1 đến N. 
Nhiệm vụ của bạn là xác định xem hoán vị này là hoán vị thứ bao nhiêu nếu bạn sinh ra tất cả các hoán vị
của tập N phần tử theo thuật toán sinh kế tiếp.

Đầu vào:
-Dòng đầu tiên là số nguyên dương N.
-Dòng thứ 2 là N số nguyên của cấu hình hiện tại
Đầu ra:
-In ra đáp án của bài toán

Input 01:
3
3 1 2
Output 01:
5
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int n;
int a[11], b[11];
bool final = false;

void sinh(){
    int i = n - 2;
    while (i >= 0 && b[i] > b[i + 1]){
        i--;
    }
    if (i < 0){
        final = true;
        return;
    }
    int j = n - 1;
    while (b[j] < b[i]){
        j--;
    }
    swap(b[i], b[j]);
    reverse(b + i + 1, b + n);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> a[i];
        b[i] = a[i];
    }
    sort(b, b + n);
    int cnt = 1;
    while (!final){
        int i = 0;
        while (i < n){
            if (a[i] != b[i]) break;
            i++;
        }
        if (i == n){
            cout << cnt;
            return 0;
        }
        sinh();
        cnt++;
    }
    return 0;
}