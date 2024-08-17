#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

bool check(string s){
    if (s == "0") return true;
    if (s.length() == 1) return false;
    int tmp = (s[s.length() - 2] - '0') * 10 + (s[s.length() - 1] - '0');
    return (tmp % 25 == 0);
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