/*
[Thuật Toán Sinh]. Bài 28. Biểu thức lớn nhất
Cho 4 số nguyên X, Y, Z, T. Nhiệm vụ của bạn là tìm giá trị lớn nhất của 
biểu thức X o1 Y o2 Z o3 T, trong đó o1, o2, o3 có thể là các dấu +, -.

Đầu vào:
-Dòng duy nhất gồm 4 số X, Y, Z, T
Đầu ra:
-In ra giá trị lớn nhất của biểu thức

Giới hạn:
-10^5<=X,Y,Z,T<=10^4

Input 01:
59 71 80 -3
Output 01:
213
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

bool isFinal = false;

void sinh(string& s){
    int i = s.length() - 1;
    while (i >= 0 && s[i] == '1'){
        s[i] = '0';
        i--;
    }
    if (i < 0){
        isFinal = true;
        return;
    }
    s[i] = '1';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int a[4];
    for (int i = 0; i < 4; i++) cin >> a[i];
    string s = string(3, '0');
    int res = INT_MIN;
    while (!isFinal){
        int tmp = a[0];
        for (int i = 0; i < 3; i++){
            if (s[i] == '0') tmp += a[i + 1];
            else tmp -= a[i + 1];
        }
        res = max(res, tmp);
        sinh(s);
    }
    cout << res;
    return 0;
}