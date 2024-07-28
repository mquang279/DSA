#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    set<char> se;
    string s1, s2;
    cin >> s1 >> s2;
    if (s1.length() != s2.length()){
        cout << "29tech";
        return 0;
    }
    for (char x : s1){
        auto it = s2.find(x);
        if (it != string::npos) s2.erase(it, 1);
        else{
            cout << "29tech";
            return 0;
        }
    }
    cout << "28tech";
    return 0;
}