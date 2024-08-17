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
        ll cnt = 0;
        string team = "";
        while (ss >> word){
            bool check = true;
            for (char x : word){
                if (isalpha(x)){
                    check = false;
                    break;
                }
            }
            if (word != "-" && !check){
                team += word + " ";
            }
            if (check && word != "-"){
                for (char x : word) cnt = cnt * 10 + (x - '0');
            }
            if (word == "-"){
                team.pop_back();
                mp[team] += cnt;
                team = "";
                cnt = 0;
            }
        }
        team.pop_back();
        mp[team] += cnt;
    }
    vector<pair<string, int>> v(mp.begin(), mp.end());
    sort(v.begin(), v.end(), cmp);
    for (auto x : v){
        cout << x.first << " " << x.second << endl;
    }
    return 0;
}