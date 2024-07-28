#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

bool check(string s){
    if (s[s.length() - 1] != '0' && s[s.length() - 1] != '5') return false;
    int sum = 0;
    for (char x : s) sum += x - '0';
    return (sum % 3 == 0);
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