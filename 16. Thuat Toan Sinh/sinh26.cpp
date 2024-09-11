/*
[Thuật Toán Sinh]. Bài 26. Ghép chữ cái
Trong 8 chữ cái Tiếng Anh đầu tiên (ABCDEFGH) thì có 2 nguyên âm là A và E, còn lại là phụ âm. 
Người ta muốn ghép các chữ cái bắt đầu từ chữ cái A cho đến chữ cái c (D <= c <= H) sao cho mỗi 
chữ cái được sử dụng đúng một lần và xâu kết quả không có nguyên âm nào bị kẹp giữa bởi hai phụ âm. 
Hãy liệt kê các xâu thỏa mãn theo thứ tự từ điển.

Đầu vào:
-Chỉ có một dòng ghi chữ cái c
Đầu ra:
-Liệt kê các xâu thỏa mãn, mỗi xâu trên một dòng.

Giới hạn:
'D' <= c <= 'H'

Input 01:
D
Output 01:
ABCD
ABDC
ACBD
ACDB
ADBC
ADCB
BCDA
BDCA
CBDA
CDBA
DBCA
DCBA
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

bool check(string s){
    for (int i = 1; i < s.length() - 1; i++){
        if (s[i] == 'A' || s[i] == 'E'){
            if (s[i - 1] != 'A' && s[i - 1] != 'E' && s[i + 1] != 'A' && s[i + 1] != 'E') return false;
            
        }
    }
    return true;
}

bool isFinal = false;

void sinh(string& s){
    int i = s.length() - 2;
    while (i >= 0 && s[i] > s[i + 1]){
        i--;
    }
    if (i < 0){
        isFinal = true;
        return;
    }
    int j = s.length() - 1;
    while (s[j] < s[i]){
        j--;
    } 
    swap(s[i], s[j]);
    reverse(s.begin() + i + 1, s.end());
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    char c;
    cin >> c;
    string s = "";
    for (char i = 'A'; i <= c; i++){
        s += i;
    }
    while (!isFinal){
        if (check(s)) cout << s << endl;
        sinh(s);
    }
    return 0;
}