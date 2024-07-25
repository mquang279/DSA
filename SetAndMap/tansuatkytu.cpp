#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin >> n;
    char tmp;
    map<char, int> mp;
    for (int i = 0; i < n; i++){
        cin >> tmp;
        mp[tmp]++;
    }
    cout << mp.begin()->first << " " << mp.begin()->second << endl
         << endl
         << mp.rbegin()->first << " " << mp.rbegin()->second << endl << endl;
    for (auto i : mp) cout << i.first << " " << i.second << endl;
    cout << endl;
    for (auto i = mp.rbegin(); i != mp.rend(); i++) cout << i->first << " " << i->second << endl;
    return 0;
}