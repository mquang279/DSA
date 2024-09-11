/*
[Thuật Toán Sinh]. Bài 12. Xâu nhị phân có K bit 1
Cho số nguyên dương N và K, nhiệm vụ của bạn là liệt kê các xâu nhị phân có độ dài N và có K bit 1 theo thứ tự từ điển tăng dần.
Sau đó tiếp tục liệt kê các xâu nhị phân mà chỉ có duy nhất K bit 1 liên tiếp.
Lưu ý rằng xâu 1101111 sẽ có 2 nhóm 3 bit 1 liên tiếp do có nhóm 1111.

Đầu vào:
-1 dòng chứa 2 số nguyên dương N và K.
Đầu ra:
-Dòng đầu tiên in ra các xâu nhị phân có K bit 1.
-Dòng thứ 2 in ra các xâu nhị phân có duy nhất K bit 1 liên tiếp.

Input 01:
3 2
Output 01:
011 101 110 
011 110
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int n, k;
string s;
bool final = false;

void sinh(){
    int i = s.length() - 1;
    while (i >= 0 && s[i] == '1'){
        s[i] = '0';
        i--;
    }
    if (i < 0){
        final = true;
        return;
    }
    s[i] = '1';
}

bool hasKBits1(string s){
    int cnt = 0;
    for (char x : s){
        if (x == '1') cnt++;
    }
    return cnt == k;
}

bool hasKConsecutiveBits1(string s){
    int cnt = 0, check = 0;
    for (char x : s){
        if (x == '1') cnt++;
        else cnt = 0;
        if (cnt > k) return false;
        if (cnt == k) check++;
    }
    return check == 1;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    cin >> n >> k;
    for (int i = 0; i < n; i++){
        s += '0';
    }
    vector<string> v;
    while (!final){
        v.push_back(s);
        sinh();
    }
    for (string x : v){
        if (hasKBits1(x)) cout << x << " ";
    }
    cout << endl;
    for (string x : v){
        if (hasKConsecutiveBits1(x)) cout << x << " ";
    }
    return 0;
}
