#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

bool check(string s){
    if (s == "0" || s == "4" || s == "8") return true;
    int n = (s[s.length() - 2] - '0') * 10 + (s[s.length() - 1] - '0');
    return (n % 4 == 0);
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