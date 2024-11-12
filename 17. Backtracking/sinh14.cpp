#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int n;
string s;

bool check(string s){
    if (s[0] != '8' || s[s.length() - 1] != '6') return false;
    if (s.find("88") != string::npos) return false;
    if (s.find("6666") != string::npos) return false;
    return true;
}

void Try(){
    if (s.length() == n){
        if (check(s)) cout << s << endl;
        return;
    }
    s += '6';
    Try();
    s.pop_back();
    s += '8';
    Try();
    s.pop_back();
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    cin >> n;
    Try();
    return 0;
}