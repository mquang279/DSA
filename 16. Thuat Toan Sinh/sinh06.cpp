/*
[Thuật Toán Sinh]. Bài 6. Sinh hoán vị theo thứ tự ngược
Cho N số nguyên tự nhiên từ 1 tới N. Bạn là hãy liệt kê tất cả các hoán vị của các số trên nhưng theo thứ tự ngược.

Đầu vào:
-Dòng duy nhất chứa số nguyên dương N.
Đầu ra:
-In ra mỗi hoán vị trên 1 dòng.

Giới hạn:
1<=N<=10

Input 01:
3
Output 01:
321
312
231
213
132
123
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int n;
int a[11];
bool check = true;

void sinh(){
    int i = n - 2;
    while (i >= 0 && a[i] < a[i + 1]){
        i--;
    }
    if (i < 0){
        check = false;
        return;
    }
    int j = n - 1;
    while (j > i && a[j] > a[i]){
        j--;
    }
    swap(a[i], a[j]);
    reverse(a + i + 1, a + n);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    cin >> n;
    for (int i = 0; i < n; i++){
        a[i] = n - i;
    }
    while (check){
        for (int i = 0; i < n; i++){
            cout << a[i];
        }
        cout << endl;
        sinh();
    }
    return 0;
}