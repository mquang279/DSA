/*
    [Thuật Toán Sinh]. Bài 1. Sinh xâu nhị phân kế tiếp
    Cho xâu nhị phân S gồm các bit 0 và 1, hãy in ra xâu nhị phân kế tiếp của S theo thuật toán sinh kế tiếp. 
    Coi xâu nhị phân kế tiếp của xâu nhị phân cuối cùng có toàn bit 1 là xâu toàn bit 0
    Đầu vào:
    • Dòng duy nhất chứa xâu S
    Đầu ra:
    • In ra xâu nhị phân kế tiếp của S

    Giới hạn:
    •1<=len(S)<=10^4

    Input 01:
    1110111
    Output 01:
    1111000
*/


#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

void sinh(string &s){
    int i = s.length() - 1;
    while (s[i] == '1' && i >= 0){
        s[i] = '0';
        i--;
    }
    if (i < 0) return;
    else s[i] = '1';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    string s;
    cin >> s;
    sinh(s);
    cout << s;
    return 0;
}