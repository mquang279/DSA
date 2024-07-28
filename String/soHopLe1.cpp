#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

bool check(string s){
    if ((s[0] + s[s.length() - 1]) % 2 != 0) return false;
    if (s.length() == 2 && abs(s[0] - s[1]) == 3) return false;
    string tmp = "";
    for (int i = 1; i < s.length() - 1; i++){
        if (abs(s[i] - s[i - 1]) == 3 || abs(s[i] - s[i + 1]) == 3) return false;
        tmp += s[i];
    }
    for (int i = 0; i < s.length() - 1; i++){
        string tmp = s[i] + s[i + 1] + "";
        if (tmp == "28") return false;
    }
    return true;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin >> t;
    while (t--){
        string number;
        cin >> number;
        if (check(number)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}