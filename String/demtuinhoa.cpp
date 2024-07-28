#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

bool checkUpper(string s){
    for (char x : s){
        if (islower(x)) return false;
    }
    return true;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    string s;
    getline(cin, s);
    stringstream ss(s);
    string word;
    int cnt = 0;
    while (ss >> word){
        if (checkUpper(word)) cnt++;
    }
    cout << cnt;
    return 0;
}