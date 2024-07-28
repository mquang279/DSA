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
    vector<string> v;
    while (ss >> word){
        v.push_back(word);
    }
    sort(v.begin(), v.end());
    for (string x : v){
        cout << x << " ";
    }
    cout << endl;
    reverse(v.begin(), v.end());
    for (string x : v){
        cout << x << " ";
    }
    return 0;
}