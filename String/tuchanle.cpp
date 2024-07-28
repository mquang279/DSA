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
    int cnt = 1;
    while (ss >> word){
        if (cnt % 2 == 1) cout << word << " ";
        else{
            reverse(word.begin(), word.end());
            cout << word << " ";
        }
        cnt++;
    }
    return 0;
}