#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

bool cmp(pair<string, int> a, pair<string, int> b){
    if (a.second == b.second) return a.first < b.first;
    return a.second < b.second;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    string s;
    getline(cin, s);
    stringstream ss(s);
    string word;
    map<string, int> mp;
    while (ss >> word){
        mp[word]++;
    }
    vector<pair<string, int>> v;
    for (auto i : mp){
        v.push_back({i.first, i.second});
    }
    sort(v.begin(), v.end(), cmp);
    cout << v[v.size() - 1].first << " " << v[v.size() - 1].second << endl;
    auto it = v.begin();
    while (it->second == v.begin()->second){
        it++;
    }
    it--;
    cout << it->first << " " << it->second;
    return 0;
}