/*
[Thuật Toán Sinh]. Bài 7. Sắp xếp vị trí
Cho N bạn học sinh, giáo viên muốn xếp các bạn học sinh này vào một hàng ngang gồm N chiếc ghế. 
Nhiệm vụ của bạn là liệt kê các cách sắp xếp N bạn học sinh này theo thứ tự tên người tăng dần về thứ tự từ điển.

Đầu vào:
-Dòng đầu tiên là số N.
-Dòng thứ 2 là N tên học sinh, mỗi tên chỉ bao gồm một từ.
Đầu ra:
-In ra các cách xếp trên từng dòng.

Giới hạn:
1<=N<=10

Input 01:
3
Lan Ngoc Nhung
Output 01:
Lan Ngoc Nhung 
Lan Nhung Ngoc 
Ngoc Lan Nhung 
Ngoc Nhung Lan 
Nhung Lan Ngoc 
Nhung Ngoc Lan
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int n;
string a[11];
bool final = false;



void sinh(){
    int i = n - 2;
    while (i >= 0 && a[i] > a[i + 1]){
        i--;
    }
    if (i < 0){
        final = true;
        return;
    }
    int j = n - 1;
    while (a[j] < a[i]){
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
        cin >> a[i];
    }
    sort(a, a + n);
    while (!final){
        for (int i = 0; i < n; i++){
            cout << a[i] << " ";
        }
        cout << endl;
        sinh();
    }
    return 0;
}