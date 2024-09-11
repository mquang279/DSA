/*
[Thuật Toán Sinh]. Bài 19. Xâu nhị phân đối xứng
Nhiệm vụ của bạn là hãy liệt kê các xâu nhị phân thuận nghịch có độ dài n theo thứ tự từ điển.

Đầu vào:
-Dòng duy nhất chứa số nguyên dương n.
Đầu ra:
-In ra các xâu thuận nghịch theo thứ tự từ điển

Giới hạn:
1<=n<=15

Input 01:
4
Output 01:
0000
0110
1001
1111
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

bool isPalindrome(string s){
    string reversed = s;
    reverse(reversed.begin(), reversed.end());
    return reversed == s;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin >> n;
    string s = string(n, '0');
    while (!isFinal){
        if (isPalindrome(s)) cout << s << endl;
        sinh(s);
    }
    return 0;
}