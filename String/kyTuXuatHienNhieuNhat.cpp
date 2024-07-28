#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

bool cmp(pair<char, int> a, pair<char, int> b){
    if (a.second == b.second) return a.first < b.first;
    return a.second < b.second;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    string s;
    cin >> s;
    map<char, int> mp;
    for (char x : s){
        mp[x]++;
    }
    vector<pair<char, int>> v;
    for (auto it : mp){
        v.push_back({it.first, it.second});
    }
    sort(v.begin(), v.end(), cmp);
    cout << v[v.size() - 1].first << " " << v[v.size() - 1].second << endl;
    auto it = v.begin();
    while (it != v.end() && it->second == v.begin()->second){
        it++;
    }
    it--;
    cout << it->first << " " << it->second << endl;
    return 0;
}