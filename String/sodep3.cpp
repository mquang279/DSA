#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

bool isIncrease(string s){
    for (int i = 0; i < s.length(); i++){
        if (i != 0 && s[i] < s[i - 1]) return false;
    }
    return true;
}

bool isDecrease(string s){
    for (int i = 0; i < s.length(); i++){
        if (i != 0 && s[i] > s[i - 1]) return false;
    }
    return true;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    string s;
    cin >> s;
    if (isDecrease(s) || isIncrease(s)) cout << "YES";
    else cout << "NO";
    return 0;
}