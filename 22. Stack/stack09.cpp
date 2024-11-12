#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    string s;
    cin >> s;
    stack<string> st;
    for (int i = s.length() - 1; i >= 0; i--) {
        if (isalpha(s[i])) {
            st.push(string(1, s[i]));
        } else {
            string o1 = st.top();
            st.pop();
            string o2 = st.top();
            st.pop();
            string operation = "(" + o1 + s[i] + o2 + ")";
            st.push(operation);
        }
    }
    cout << st.top();
    return 0;
}