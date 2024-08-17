#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    string s1, s2;
    cin >> s1 >> s2;
    set<char> se;
    for (char x : s1){
        if (s2.find(x) != string::npos) se.insert(x);
    }
    for (char x : se) cout << x;
    cout << endl;
    for (char x : s1) se.insert(x);
    for (char x : s2) se.insert(x);
    for (char x : se) cout << x;
    return 0;
}