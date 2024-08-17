#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    string s;
    getline(cin, s);
    string res1 = "", res2 = "";
    for (int i = 0; i < s.length(); i++){
        if (isalpha(s[i])){
            res1 += toupper(s[i]);
            res2 += tolower(s[i]);
        }
        else{
            res1 += s[i];
            res2 += s[i];
        }
    }
    cout << res1 << endl;
    cout << res2;
    return 0;
}