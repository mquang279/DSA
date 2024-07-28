#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    while (s[0] == '0'){
        s.erase(s.begin());
    }
    if (s.size() == 0) s = "0";
    cout << s;
    return 0;
}