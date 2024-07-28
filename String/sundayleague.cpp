#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

bool cmp(pair<string, int> a, pair<string, int> b){
    if (a.second == b.second) return a.first < b.first;
    return a.second > b.second;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    string s;
    map<string, int> mp;
    while (getline(cin, s)){
        stringstream ss(s);
        string word;
        while (getline(ss, word, '-')){
            if (word[word.length() - 1] == ' ') word.pop_back();
            if (word[0] == ' ') word.erase(word.begin());
            mp[word]++;
        }
    }
    vector<pair<string, int>> v;
    for (auto it : mp){
        v.push_back({it.first, it.second});
    }
    sort(v.begin(), v.end(), cmp);
    for (auto x : v){
        cout << x.first << " " << x.second << endl;
    }
    return 0;
}