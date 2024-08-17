#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

void createEmail(string info){
    stringstream ss(info);
    string word;
    vector<string> v;
    while (ss >> word){
        for (char &x : word) x = tolower(x);
        v.push_back(word);
    }
    string email = "@xyz.edu.vn", tmp = "";
    for (int i = 0; i < v.size() - 2; i++){
        tmp += v[i][0];
    }
    email = v[v.size() - 2] + tmp + email;
    cout << email << endl;
    string password = "";
    for (int i = 0; i < v[v.size() - 1].length(); i++){
        if (!(((i == 0) || (i == 3)) && v[v.size() - 1][i] == '0') && v[v.size() - 1][i] != '/') password += v[v.size() - 1][i];
    }
    cout << password << endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin >> t;
    cin.ignore();
    while (t--){
        string info;
        getline(cin, info);
        createEmail(info);
    }
    return 0;
}