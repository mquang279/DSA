#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    string s;
    cin >> s;
    if (s[1] == '/') s = '0' + s;
    if (s[4] == '/') s.insert(s.begin() + 3, '0');
    cout << s;
    return 0;
}