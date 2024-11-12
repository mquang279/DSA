/*
[Ngăn Xếp]. Bài 6. Remove Duplicate 2
Cho một xâu kí tự S chỉ bao gồm kí tự in thường, nhiệm vụ của bạn là xóa k kí tự liền kề giống nhau khỏi xâu S.
Ví dụ xâu aaabbbcccedddeeu sau khi xóa 3 kí tự liền kề giống nhau khỏi xâu S sẽ trở thành : u

Đầu vào:
-Dòng 1 chứa xâu kí tự S
-Dòng 2 chứa số nguyên dương k
Đầu ra:
-In ra xâu S sau khi xóa, in ra EMPTY nếu S trở thành xâu rỗng

Giới hạn
1<=len(S)<=10000
2<=K<=len(S)

Ví dụ :
Input 01:
aabbccedde
2
Output 01:
EMPTY

Input 02:
aaaccddda
3
Output 02:
cca

Input 03:
aaabbbcccedddeeu 
3
Output 02:
u
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int countTopOfStack(stack<char> st, char x) {
    int cnt = 0;
    while (!st.empty() && st.top() == x) {
        cnt++;
        st.pop();
    }
    return cnt;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    string s;
    int k;
    cin >> s >> k;
    stack<char> st;
    for (char x : s) {
        if (st.empty() || (st.top() != x) || (st.top() == x && countTopOfStack(st, x) <= k - 2)) {
            st.push(x);
        } else {
            while (!st.empty() && st.top() == x) {
                st.pop();
            }
        }
    }
    string res = "";
    while (!st.empty()) {
        res = st.top() + res;
        st.pop();
    }
    if (res.length() == 0) cout << "EMPTY";
    else cout << res;
    return 0;
}