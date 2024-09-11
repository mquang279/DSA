/*
[Quay Lui - Nhánh Cận]. Bài 16. Điện thoại cục gạch
Cho xâu kí tự S chỉ bao gồm các số từ 2 tới 9, mỗi chữ số này trên bàn phím của điện 
thoại cục gạch tương ứng với 3 chữ cái như trong hình bên dưới. Bạn hãy in ra các 
xâu kí tự có thể tạo thành bằng cách ấn mỗi chữ số trong xâu S đúng 1 lần. Bạn hãy 
in ra các xâu kết quả theo thứ tự từ điển tăng dần.

Đầu vào:
• Dòng duy nhất chứa xâu S
Đầu ra:
• In ra các xâu thỏa mãn

Giới hạn:
• 2<=len(S)<=9
• Các kí tự trong S là khác nhau

Input 01:
23
Output 01:
ad ae af bd be bf cd ce cf
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

string s, res;
string num[10];
set<string> se;

void init(){
    int start = 2;
    int d[10] = {0, 0, 3, 3, 3, 3, 3, 4, 3, 4};
    int cnt = 0;
    for (char c = 'a'; c <= 'z'; c++){
        cnt++;
        num[start] += c;
        if (cnt == d[start]){
            cnt = 0;
            start++;
        }
    }
}

void Try(int i){
    if (res.length() == s.length()) se.insert(res);
    for (int j = 0; j < num[s[i] - '0'].length(); j++){
        res += num[s[i] - '0'][j];
        Try(i + 1);
        res.pop_back();
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    cin >> s;
    sort(s.begin(), s.end());
    init();
    Try(0);
    for (string x : se) cout << x << " ";
    return 0;
}