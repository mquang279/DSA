#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    string s;
    cin >> s;
    stack<char> openBracket;
    stack<char> mathOperator;
    for (char x: s) {
        if (x == '(') {
            openBracket.push(x);
        } else if (x == ')') {
            if (mathOperator.empty()) {
                cout << "YES";
                return 0;
            } else {
                openBracket.pop();
                mathOperator.pop();
            }
        } else if (x == '+' || x == '-' || x == '/' || x == '*') {
            mathOperator.push(x);
        }
    }
    cout << "NO";
    return 0;
}
