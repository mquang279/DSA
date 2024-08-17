#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    string s;
    cin >> s;
    if ((s.length() == 1 && s != "6" && s != "0") || ((s[s.length() - 1] - '0') % 2 != 0)){
        cout << "NO";
        return 0;
    }
    int sum = 0;
    for (char x : s){
        sum += x - '0';
    }
    if (sum % 3 == 0) cout << "YES";
    else cout << "NO";
    return 0;
}