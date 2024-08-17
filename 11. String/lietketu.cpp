#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    string s;
    getline(cin , s);
    vector<string> res;
    string tmp = "";
    for (char x : s){
        if (x != '.' && x != ',' && x != '!' && x != '?' && x != ' ') tmp += x;
        else{
            if (tmp != "") res.push_back(tmp);
            tmp = "";
        }
    }
    if (tmp != "") res.push_back(tmp);
    for (string x : res) cout << x << " ";
    return 0;
}