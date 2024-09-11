/*
[Quay Lui - Nhánh Cận]. Bài 20. Tổ hợp lặp
Cho xâu kí tự S gồm N chữ cái khác nhau, hãy liệt kê tổ hợp lặp chập K của N kí tự trên và in ra theo thứ tự từ điển tăng dần.

Đầu vào:
• Dòng 1 chứa 2 số nguyên N và K
• Dòng 2 chứa xâu S
Đầu vào:
• Dòng 1 chứa 2 số nguyên N và K
• Dòng 2 chứa xâu S

Giới hạn
1<=K<=N<=15

Input 01
4 2
ABCD
Output 01
AA
AB
AC
AD
BB
BC
BD
CC
CD
DD
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int n, k;
string s, res;

void Try(int i){
    if (res.length() == k){
        cout << res << endl;
        return;
    }
    for (int j = i; j < n; j++){
        res += s[j];
        Try(j);
        res.pop_back();
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    cin >> n >> k >> s;
    sort(s.begin(), s.end());
    Try(0);
    return 0;
}