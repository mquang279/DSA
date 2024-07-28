#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

bool checkChar(char a){
    return (a != '2' && a != '8' && a != 't' && a != 'e' && a != 'c' && a != 'h');
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    string s;
    cin >> s;
    string res = "";
    for (char x : s){
        if (checkChar(x)) res += x;
    }
    if (res.length() == 0) cout << "EMPTY";
    else cout << res;
    return 0;
}