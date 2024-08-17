#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

bool isPalindrome(string s){
    string tmp = s;
    reverse(tmp.begin(), tmp.end());
    return tmp == s;
}

bool isPerfect(string s){
    if (!isPalindrome(s)) return false;
    for (char x : s){
        if (x == '6') return true;
    }
    return false;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    string s;
    cin >> s;
    if (isPerfect(s)) cout << "YES";
    else cout << "NO";
    return 0;
}