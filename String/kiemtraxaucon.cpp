#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    string s, t;
    getline(cin, s);
    getline(cin, t);
    if (s.find(t) != string::npos) cout << "YES";
    else cout << "NO";
    return 0;
}