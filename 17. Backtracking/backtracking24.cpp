/*
[Quay Lui - Nhánh Cận]. Bài 24. Letter case
Cho xâu kí tự S chỉ bao gồm chữ cái và chữ số, bạn có thể thay đổi các chữ cái trong xâu thành 
kiểu in hoa hoặc in thường tương ứng của nó nhưng không được thay đổi vị trí ban đầu. Bạn hãy 
liệt kê mọi xâu khác nhau có thể tạo thành bằng cách trên và liệt kê theo thứ tự từ điển tăng dần.

Đầu vào
• Dòng duy nhất chứa xâu S
Đầu ra
• In ra đáp án của bài toán

Giới hạn
• 1<=len(S)<=12

Input 01:
28TeCH
Output 01:
28TECH
28TECh
28TEcH
28TEch
28TeCH
28TeCh
28TecH
28Tech
28tECH
28tECh
28tEcH
28tEch
28teCH
28teCh
28tecH
28tech
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

string s;
set<string> se;

void Try(int i){
    if (i == s.length()) return;
    if (isalpha(s[i])){
        s[i] = tolower(s[i]);
        se.insert(s);
        Try(i + 1);
        s[i] = toupper(s[i]);
        se.insert(s);
        Try(i + 1);
    }
    else Try(i + 1);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    cin >> s;
    Try(0);
    if (se.size() == 0) cout << s;
    for (string x : se) cout << x << endl;
    return 0;
}