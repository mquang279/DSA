#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    string s;
    cin >> s;
    string res = "";
    res += s[s.length() - 1];
    for (int i = s.length() - 2; i >= 0; i--){
        res = s[i] + res;
        if ((s.length() - i) % 3 == 0 && i != 0){
            res = ',' + res;
        }
    }
    cout << res;
    return 0;
}