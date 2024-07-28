#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    string s;
    cin >> s;
    if (s.length() % 2 == 0) cout << "NOT FOUND";
    else cout << s[s.length() / 2];
    return 0;
}