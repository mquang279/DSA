#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

bool cmp(string a, string b){
    if (a.length() == b.length()) return a < b;
    return a.length() < b.length();
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    string s;
    getline(cin, s);
    stringstream ss(s);
    string word;
    vector<string> v;
    while (ss >> word){
        v.push_back(word);
    }
    sort(v.begin(), v.end());
    for (string x : v) cout << x << " ";
    cout << endl;
    sort(v.begin(), v.end(), cmp);
    for (string x : v) cout << x << " ";
    return 0;
}