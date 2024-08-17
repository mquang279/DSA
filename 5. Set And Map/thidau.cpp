#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin >> t;
    map<string, multiset<string>> mp;
    cin.ignore();
    while (t--){
        string s;
        getline(cin, s);
        string team1 = "";
        string curr = "";
        for (int i = 0; i < s.length(); i++){
            if (s[i] == '-'){
                team1 = curr;
                curr = "";
            }
            else curr += s[i];
        }
        team1.erase(team1.length() - 1, 1);
        curr.erase(0, 1);
        mp[team1].insert(curr);
        mp[curr].insert(team1);
    }
    cout << endl;
    for (auto it : mp){
        cout << it.first << " : ";
        auto i = it.second.begin();
        auto check = it.second.end();
        check--;
        for (auto i = it.second.begin(); i != it.second.end(); i++){
            if (i != check) cout << *i << ", ";
            else cout << *i;
        }
        cout << endl;
    }
    return 0;
}