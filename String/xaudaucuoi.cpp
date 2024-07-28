#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    string s;
    cin >> s;
    map<char, int> mp;
    for (char x : s) mp[x]++;
    ll res = s.length();
    for (auto it : mp){
        res += 1ll * it.second * (it.second - 1) / 2;
    }
    cout << res;
    return 0;
}