/*
[Thuật Toán Sinh]. Bài 29. Dấu ngoặc hợp lệ
Cho biểu thức chỉ bao gồm dấu '(' và ')', nhiệm vụ của bạn là hãy sinh ra các 
xâu biểu thức cân bằng, ví dụ về biểu thức cân bằng (), ()()(), ((())), (())((())), 
ví dụ về biểu thức không cân bằng (()))(, ()()))

Đầu vào:
-Dòng duy nhất chứa số nguyên dương N là độ dài của biểu thức
Đầu ra:
-In ra các biểu thức cân bằng theo thứ tự từ điển. Nếu không tồn tại biểu thức hợp lệ có độ dài N thì in ra NOT FOUND.

Giới hạn:
2<=N<=14, N là số chẵn

Input 01:
4
Output 01:
(())
()()
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

bool isFinal = false;

void sinh(string& s){
    int i = s.length() - 1;
    while (i >= 0 && s[i] == ')'){
        s[i] = '(';
        i--;
    }
    if (i < 0){
        isFinal = true;
        return;
    }
    s[i] = ')';
}

bool isValid(string s){
    stack<char> st;
    for (char x : s){
        if (st.empty()) st.push(x);
        else{
            if (st.top() == '(' && x == ')') st.pop();
            else st.push(x);
        }
    }
    return st.empty();
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin >> n;
    string s = string(n, '(');
    bool check = false;
    while (!isFinal){
        if (isValid(s)){
            check = true;
            cout << s << endl;
        }
        sinh(s);
    }
    if (!check) cout << "NOT FOUND";
    return 0;
}