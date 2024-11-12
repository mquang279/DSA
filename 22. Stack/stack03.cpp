/*
[Ngăn Xếp]. Bài 3. Dấu ngoặc hợp lệ
Cho một xâu kí tự chỉ bao gồm các kí tự '(', ')', '{', '}', '[', ']', 
hãy xác định xem các dấu ngoặc trong xâu có cân bằng hay không.
Một vài ví dụ về xâu cân bằng : ((())), {{((()))}}[][][], (())(()())...

Đầu vào:
-Xâu kí tự S trên 1 dòng
Đầu ra:
-In ra YES hoặc NO nếu xâu kí tự cân bằng hoặc không.

Giới hạn:
1<=len(S)<=10000

Ví dụ :
Input 01:
((((()))))
Output 01:
YES
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

bool isValid(string s) {
    stack<char> st;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
            st.push(s[i]);
        } else {
            if (st.empty()) return false;
            if (st.top() == '(' && s[i] != ')') return false;
            if (st.top() == '{' && s[i] != '}') return false;
            if (st.top() == '[' && s[i] != ']') return false;
            st.pop();
        }
    }
    return st.empty();
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    string s;
    cin >> s;
    if (isValid(s)) cout << "YES";
    else cout << "NO";
    return 0;
}