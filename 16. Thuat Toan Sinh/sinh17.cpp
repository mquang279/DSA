/*
[Thuật Toán Sinh]. Bài 17. Xâu kế tiếp
Cho chuỗi S các ký tự số và đưa ra màn hình hoán vị kế tiếp của các ký tự số đó.
Ví dụ : với S = "123" thì xâu kế tiếp là "132", S = "1779" thì xâu kế tiếp là "1797".

Đầu vào:
-Dòng duy nhất chứa xâu S
Đầu ra:
-In ra xâu hoán vị kế tiếp của S, hoặc in ra "NOT EXIST" nếu S là xâu hoán vị cuối cùng.

Giới hạn:
1<=len(S)<=10000

Input 01:
99877541
Output 01:
NOT EXIST

Input 02:
76090400736422
Output 02:
76090400742236
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

string s;
bool isFinal = false;

void sinh(){
    int i = s.length() - 2;
    while (i >= 0 && s[i] >= s[i + 1]){
        i--;
    }
    if (i < 0){
        isFinal = true;
        return;
    }
    int j = s.length() - 1;
    while (s[j] <= s[i]){
        j--;
    }
    swap(s[i], s[j]);
    reverse(s.begin() + i + 1, s.end());
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    cin >> s;
    sinh();
    if (isFinal) cout << "NOT EXIST";
    else cout << s;
    return 0;
}