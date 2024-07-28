#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

bool isPalindrome(string s){
    for (int i = 0; i < s.length() / 2; i++){
        if (s[i] != s[s.length() - i - 1]) return false;
    }
    return true;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    string s;
    getline(cin, s);
    vector<string> v;
    stringstream ss(s);
    string word;
    while (ss >> word){
        if (isPalindrome(word)) v.push_back(word);
    }
    sort(v.begin(), v.end());
    for (string x : v) cout << x << " ";
    return 0;
}