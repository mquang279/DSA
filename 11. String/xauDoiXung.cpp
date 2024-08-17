#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

bool isPalindrome(string s){
    string tmp = s;
    reverse(tmp.begin(), tmp.end());
    return tmp == s;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    string s;
    cin >> s;
    if (isPalindrome(s)) cout << "true";
    else cout << "false";
    return 0;
}