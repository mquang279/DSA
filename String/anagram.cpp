#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

bool isAnagram(string s1, string s2){
    unordered_map<char, int> mp1, mp2;
    for (char x : s1){
        mp1[x]++;
    }
    for (char x : s2){
        mp2[x]++;
    }
    if (mp1.size() != mp2.size()) return false;
    for (auto it : mp1){
        if (mp2.find(it.first) == mp2.end()) return false;
        if (mp2[it.first] != it.second) return false;
    }
    return true;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    string s1, s2;
    int t;
    cin >> t;
    while (t--){
        cin >> s1 >> s2;
        if (isAnagram(s1, s2)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}