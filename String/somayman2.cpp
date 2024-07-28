#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    string s;
    cin >> s;
    while (s.find("111") != string::npos){
        auto it = s.find("111");
        s.erase(it, 3);
    }
    if (s.length() == 0) cout << "EMPTY";
    else cout << s;
    return 0;
}