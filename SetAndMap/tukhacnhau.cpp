#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

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
    cout << mp.size() << endl;
    cout << mp.begin()->first << " " << mp.rbegin()->first << endl;
    return 0;
}