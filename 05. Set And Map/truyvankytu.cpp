#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    string s;
    cin >> s;
    map<char, int> mp;
    int max_val = INT_MIN, min_val = INT_MAX;
    for (char x : s) mp[x]++;
    for (auto it : mp){
        max_val = max(max_val, it.second);
        min_val = min(min_val, it.second);
    }
    for (auto it : mp){
        if (it.second == max_val){
            cout << it.first << " " << it.second << endl;
            break;
        }
    }
    for (auto it = mp.rbegin(); it != mp.rend(); it++){
        if (it->second == min_val){
            cout << it->first << " " << it->second << endl;
            break;
        }
    }
    cout << mp.size();
    return 0;
}