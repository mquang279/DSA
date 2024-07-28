#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    string s;
    cin >> s;
    char curr = s[0];
    ll cnt = 0;
    for (int i = 1; i < s.length(); i++){
        if (isdigit(s[i])){
            cnt = cnt * 10 + (s[i] - '0');
        }
        if (!isdigit(s[i]) || i == s.length() - 1){
            for (int j = 0; j < cnt; j++){
                cout << curr;
            }
            cnt = 0;
            curr = s[i];
        }
    }
    return 0;
}