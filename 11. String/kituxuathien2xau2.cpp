#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    string s1, s2;
    cin >> s1 >> s2;
    set<char> se1, se2;
    for (char x : s1){
        if (s2.find(x) == string::npos) se1.insert(x);
    }
    for (char x : s2){
        if (s1.find(x) == string::npos) se2.insert(x);
    }
    for (char x : se1) cout << x;
    cout << endl;
    for (char x : se2) cout << x;
    return 0;
}