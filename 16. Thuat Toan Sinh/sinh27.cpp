/*
[Thuật Toán Sinh]. Bài 27. Thẻ bài
Tèo có N thẻ bài, mỗi thẻ ghi một con số từ 1 tới N. Không có 2 thẻ nào ghi hai số trùng nhau. 
Tèo muốn xếp thứ tự các thẻ bài sao cho không có hai con số nào liền kề nhau ở cạnh nhau.

Đầu vào:
-Số nguyên dương N
Đầu ra:
-In ra các cấu hình thỏa mãn theo thứ tự từ điển tăng dần

Giới hạn:
4<=N<=10

Input 01:
4
Output 01: 
2413
3142
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

bool isFinal = false;

bool check(string s){
    for (int i = 1; i < s.length(); i++){
        if (s[i - 1] == s[i] - 1 || s[i - 1] == s[i] + 1) return false;
    }
    return true;
}

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
    int n;
    cin >> n;
    string s = "";
    for (int i = 0; i < n; i++){
        s += to_string(i + 1);
    }
    while (!isFinal){
        if (check(s)) cout << s << endl;
        sinh(s);
    }
    return 0;
}