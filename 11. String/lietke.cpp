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
    set<string> se;
    while (ss >> word){
        se.insert(word);
    }
    for (string x : se) cout << x << " ";
    cout << endl;
    stringstream ss2(s);
    while (ss2 >> word){
        if (se.find(word) != se.end()){
            cout << word << " ";
            se.erase(word);
        }
    }
    return 0;
}