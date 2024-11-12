/*
[Ngăn Xếp]. Bài 5. Remove Duplicate
Cho một xâu kí tự S chỉ bao gồm kí tự in thường, nhiệm vụ của bạn là xóa các kí tự liền kề giống nhau khỏi xâu S.
Ví dụ xâu aabbccc sau khi xóa các kí tự liền kề sẽ thành c, xâu abba sau khi xóa các kí tự liền kề sẽ thành xâu rỗng.

Đầu vào
Dòng duy nhất chứa xâu kí tự S
Đầu ra
In ra xâu S sau khi xóa các kí tự liền kề giống nhau, 
nếu xâu sau khi xóa rỗng thì in ra EMPTY.

Giới hạn
1<=len(S)<=10000

Ví dụ :
Input 01:
dddbbabcb
Output 01:
dabcb

*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    string s;
    cin >> s;
    stack<char> st;
    for (char x : s) {
        if (st.empty() || (x != st.top())) {
            st.push(x);
        } else {
            st.pop();
        }
    }
    if (st.empty()) {
        cout << "EMPTY";
        return 0;
    }
    string res = "";
    while (!st.empty()) {
        res = st.top() + res;
        st.pop();
    }
    cout << res;
    return 0;
}