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
    stringstream ss2(s);
    while (ss2 >> word){
        if (mp[word] != 0){
            cout << word << " " << mp[word] << endl;
            mp[word] = 0;
        }
    }
    return 0;
}