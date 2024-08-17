#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

bool isPalindrome(string s){
    for (int i = 0; i < s.length() / 2; i++){
        if (s[i] != s[s.length() - i - 1]) return false;
    }
    return true;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin >> n;
    string s;
    int cnt = 0;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> s;
            if (j <= i && isPalindrome(s)) cnt++;
        }
    }
    cout << cnt;
    return 0;
}