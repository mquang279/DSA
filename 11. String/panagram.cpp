#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    string s;
    cin >> s;
    for (char &x : s){
        x = tolower(x);
    }
    set<char> se;
    for (char x : s){
        se.insert(x);
    }
    if (se.size() == 26) cout << "YES";
    else cout << "NO";
    return 0;
}