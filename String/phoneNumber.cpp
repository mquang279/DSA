#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

bool check(string s){
    if (s[0] != '0') return false;
    if (s.length() != 10 && s.length() != 11) return false;
    for (char x : s){
        if (!isdigit(x)) return false;
    }
    return true;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin >> t;
    while (t--){
        string phoneNumber;
        cin >> phoneNumber;
        if (check(phoneNumber)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}