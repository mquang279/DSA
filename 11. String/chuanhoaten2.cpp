#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

void chuanHoa(string &s){
    for (char &x : s){
        x = tolower(x);
    }
    s[0] = toupper(s[0]);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    string s, word;
    getline(cin, s);
    stringstream ss(s);
    vector<string> words;
    while (ss >> word){
        chuanHoa(word);
        words.push_back(word);
    }
    for (char &x : words[words.size() - 1]) x = toupper(x);
    for (int i = 0; i < words.size(); i++){
        if (i == words.size() - 2) cout << words[i] << ", ";
        else cout << words[i] << " ";
    }
    cout << endl;
    cout << words[words.size() - 1] << ", ";
    for (int i = 0; i < words.size() - 1; i++){
        cout << words[i] << " ";
    }
    return 0;
}