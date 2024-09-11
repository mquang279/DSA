/*
[Thuật Toán Sinh]. Bài 24. Liệt kê xâu kí tự
Cho chữ cái c in hoa và số nguyên K
Hãy tìm cách liệt kê tất cả các xâu có K ký tự khác nhau được tạo ra bởi các chữ cái tính từ "A" đến ký tự c.
Các ký tự trong xâu kết quả có thể được lặp lại, xem ví dụ mẫu để rõ hơn.

Đầu vào:
-Chữ cái c và K
Đầu ra:
-Ghi ra lần lượt các xâu ký tự kết quả theo thứ tự từ điển trên từng dòng.

Giới hạn:
'A' < c <='G'
0 < K < (c – 'A')

Input 01:
C 2
Output 01:
AA
AB
AC
BA
BB
BC
CA
CB
CC
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

char c;
bool isFinal = false;

void sinh(string& s){
    int i = s.length() - 1;
    while (i >= 0 && s[i] == c){
        i--;
    }
    if (i < 0){
        isFinal = true;
        return;
    }
    s[i] = (char)(s[i] + 1);
    for (int j = i + 1; j < s.length(); j++){
        s[j] = 'A';
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int k;
    cin >> c >> k;
    string s = string(k, 'A');
    while (!isFinal){
        cout << s << endl;
        sinh(s);
    }
    return 0;
}