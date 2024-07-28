#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    string s;
    getline(cin, s);
    map<string, int> mp;
    stringstream ss(s);
    string word;
    while (ss >> word) mp[word]++;
    for (auto i : mp){
        cout << i.first << " " << i.second << endl;
    }
    cout << endl;
    stringstream ss2(s);
    while (ss2 >> word){
        if (mp[word] != 0){
            cout << word << " " << mp[word] << endl;
            mp[word] = 0;
        }
    }
    return 0;
}