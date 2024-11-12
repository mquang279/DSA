#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    string s;
    cin >> s;
    stack<char> st;
    map<char, int> priority;
    priority['('] = 0;
    priority['+'] = 1;
    priority['-'] = 1;
    priority['*'] = 2;
    priority['/'] = 2;
    string res = "";
    for (char x : s) {
        if (isalpha(x)) res += x;
        else if (x == '(') st.push(x);
        else if (x == ')') {
            while (!st.empty() && st.top() != '(') {
                res += st.top();
                st.pop();
            }
            st.pop();
        } else {
            while (!st.empty() && priority[st.top()] >= priority[x]) {
                res += st.top();
                st.pop();
            }
            st.push(x);
        }
    }
    while (!st.empty()) {
        res += st.top();
        st.pop();
    }
    cout << res;
    return 0;
}