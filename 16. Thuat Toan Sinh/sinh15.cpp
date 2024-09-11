/*
    [Thuật Toán Sinh]. Bài 15. Hoán vị xâu ký tự
    Cho một xâu kí tự S chỉ bao gồm các kí tự , hãy in ra các hoán vị của các kí tự khác nhau trong S theo thứ tự từ điển tăng dần.

    Đầu vào:
    -1 dòng chứa xâu S
    Đầu ra:
    -In ra các hoán vị của xâu S

    Giới hạn:
    1<=len(S)<=10

    Input 01:
    lqk
    Output 01:
    klq
    kql
    lkq
    lqk
    qkl
    qlk
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

string s;
bool isFinal = false;

void sinh(){
    int i = s.length() - 2;
    while (i >= 0 && s[i] > s[i + 1]){
        i--;
    }
    if (i < 0){
        isFinal = true;
        return;
    }
    int j = s.length() - 1;
    while (j > i && s[j] < s[i]){
        j--;
    }
    swap(s[j], s[i]);
    reverse(s.begin() + i + 1, s.end());
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    cin >> s;
    set<char> se(s.begin(), s.end());
    s = "";
    for (char x : se) s += x;
    while (!isFinal){
        cout << s << endl;
        sinh();
    }
    return 0;
}