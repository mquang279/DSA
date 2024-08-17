#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

bool check(string s){
    for (int i = 0; i < s.length(); i++){
        s[i] = tolower(s[i]);
    }
    return s == "28tech";
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
        if (check(word)) cnt++;
    }
    cout << cnt;
    return 0;
}