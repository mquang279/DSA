#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    string s;
    getline(cin, s);
    for (int i = 0; i < s.length(); i++){
        s[i] = tolower(s[i]);
    }
    stringstream ss(s);
    string word;
    unordered_set<string> se;
    while (ss >> word){
        se.insert(word);
    }
    cout << se.size();
    return 0;
}