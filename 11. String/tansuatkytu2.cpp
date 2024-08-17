#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    string s;
    cin >> s;
    map<char, int> mp;
    for (char x : s){
        mp[x]++;
    }
    for (auto i : mp){
        cout << i.first << " " << i.second << endl;
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