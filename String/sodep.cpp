#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    string s;
    cin >> s;
    if (s.length() == 2){
        if (abs(s[0] - s[1]) == 1) cout << "YES";
        else cout << "NO";
        return 0;
    }
    for (int i = 1; i < s.length() - 1; i++){
        if (abs(s[i] - s[i - 1]) != 1 || abs(s[i] - s[i + 1]) != 1){
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}