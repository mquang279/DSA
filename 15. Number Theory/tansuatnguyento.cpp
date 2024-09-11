#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    string s;
    cin >> s;
    map<char, int> mp;
    mp['2'] = mp['3'] = mp['5'] = mp['7'] = 0;
    for (char x : s){
        if (mp.find(x) != mp.end()) mp[x]++;
    }
    for (auto it : mp){
        if (it.second != 0){
            cout << it.first << " " << it.second << endl;
        }
    }
    cout << endl;
    for (char x : s){
        if (mp[x] != 0){
            cout << x << " " << mp[x] << endl;
            mp[x] = 0;
        }
    }
    return 0;
}