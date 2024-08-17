#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    string s, t;
    getline(cin, s);
    getline(cin, t);
    stringstream ss1(s);
    stringstream ss2(t);
    string word;
    set<string> words1;
    unordered_set<string> words2;
    while (ss1 >> word){
        for (char &x : word) x = tolower(x);
        words1.insert(word);
    }
    while (ss2 >> word){
        for (char &x : word) x = tolower(x);
        words2.insert(word);
    }
    for (string x : words1){
        if (words2.find(x) == words2.end()) cout << x << " ";
    }
    return 0;
}