#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    string s;
    cin >> s;
    char curr = s[0];
    int cnt = 1;
    string res = "";
    for (int i = 1; i < s.length(); i++){
        if (s[i] != curr){
            res += curr + to_string(cnt);
            curr = s[i];
            cnt = 1;
        }
        else cnt++;
    }
    res += curr + to_string(cnt);
    cout << res;
    return 0;
}