#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin >> t;
    cin.ignore();
    map<string, int> mp;
    while (t--){
        string info;
        getline(cin, info);
        stringstream ss(info);
        string word;
        vector<string> words;
        while (ss >> word){
            for (char &x : word) x = tolower(x);
            words.push_back(word);
        }
        string name = "", email = "";
        for (int i = 0; i < words.size() - 2; i++){
            name += words[i][0];
        }
        name = words[words.size() - 2] + name;
        mp[name]++;
        if (mp[name] != 1){
            name += to_string(mp[name]);
        }
        email += name + "@xyz.edu.vn";
        cout << email << endl;
        string password = "";
        for (int i = 0; i < words[words.size() - 1].length(); i++){
            if (!(((i == 0) || (i == 3)) && words[words.size() - 1][i] == '0') && words[words.size() - 1][i] != '/') password += words[words.size() - 1][i];
        }
        cout << password << endl;
    }
    return 0;
}