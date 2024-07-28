#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    string name;
    map<string, int> mp;
    while (getline(cin, name)){
        mp[name]++;
    }
    for (auto it : mp){
        cout << it.first << " " << it.second << endl;
    }
    return 0;
}