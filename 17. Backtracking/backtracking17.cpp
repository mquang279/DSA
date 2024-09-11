/*
[Quay Lui - Nhánh Cận]. Bài 17. Dấu ngoặc
Bạn hãy sinh ra các biểu thức dấu ngoặc hợp lệ từ các cặp dấu ngoặc "()", "[]", "{}" có độ dài N. 
Kết quả được in ra theo thứ tự từ điển tăng dần, nếu không tồn tại biểu thức hợp lệ thỏa mãn thì in ra NOT FOUND.

Đầu vào:
• Dòng duy nhất chứa số nguyên N
Đầu ra:
• In ra đáp án của bài toán

Giới hạn:
• 2<=N<=15

Input 01
4
Output 01
(()) ()() ()[] (){} ([]) ({}) [()] [[]] []() [][] []{} [{}] {()} {[]} {{}} {}() {}[] {}{}
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int n;
char brackets[6] = {'(', '[', '{', ')', ']', '}'};
set<string> validCombinations;
map<char, char> matchingBracket;
string s;

bool isValid(string s){
    stack<char> openBracket;
    for (char x : s){
        if (x == '(' || x == '[' || x == '{'){
            openBracket.push(x);
        }
        else{
            if (openBracket.empty() || matchingBracket[x] != openBracket.top()) return false;
            else openBracket.pop();
        }
    }
    return openBracket.empty();
}

void Try(int i){
    if (s.length() == n && isValid(s)) validCombinations.insert(s);
    if (i == n) return;
    for (int j = 0; j < 6; j++){
        s += brackets[j];
        Try(i + 1);
        s.pop_back();
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    cin >> n;
    matchingBracket[')'] = '(';
    matchingBracket[']'] = '[';
    matchingBracket['}'] = '{';
    Try(0);
    if (validCombinations.size() == 0) cout << "NOT FOUND";
    else{
        for (string x : validCombinations){
            cout << x << " ";
        }
    }
    return 0;
}