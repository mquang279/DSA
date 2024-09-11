#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

bool check(string s){
    int firstDigit = s[0] - '0';
    int lastDigit = s[s.length() - 1] - '0';
    if (firstDigit * 2 != lastDigit && lastDigit * 2 != firstDigit) return false;
    string middle = s.substr(1, s.length() - 2);
    string reverseMiddle = middle;
    reverse(reverseMiddle.begin(), reverseMiddle.end());
    return reverseMiddle == middle;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    string s;
    cin >> s;
    if (check(s)) cout << "YES";
    else cout << "NO";
    return 0;
}