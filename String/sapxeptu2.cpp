#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

bool isPalindrome(string s){
    string tmp = s;
    reverse(tmp.begin(), tmp.end());
    return tmp == s;
}

bool cmp(string a, string b){
    return a.length() < b.length();
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    string s;
    getline(cin, s);
    stringstream ss(s);
    string word;
    vector<string> v;
    unordered_set<string> se;
    while (ss >> word){
        if (isPalindrome(word) && se.find(word) == se.end()){
            v.push_back(word);
            se.insert(word);
        }
    }
    stable_sort(v.begin(), v.end(), cmp);
    for (string x : v) cout << x << " ";
    return 0;
}
