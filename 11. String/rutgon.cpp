#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin >> n;
    cin.ignore();
    while (n--){
        string s;
        getline(cin, s);
        stringstream ss(s);
        string word;
        map<string, int> mp;
        while(getline(ss, word, '+')){
            if (word[word.length() - 1] == ' ') word.pop_back();
            if (word[0] == ' ') word.erase(0, 1);
            int cnt = 0;
            bool check = true;
            string tmp = "";
            for (char x : word){
                if (isalpha(x)){
                    check = false;
                }
                if (check){
                    cnt = cnt * 10 + (x - '0');
                }
                else{
                    tmp += x;
                }
            }
            mp[tmp] += cnt;
        }
        auto tmp = mp.end();
        tmp--;
        for (auto it = mp.begin(); it != mp.end(); it++){
            if (it != tmp){
                cout << it->second << it->first << " + ";
            }
            else cout << it->second << it->first << endl;
        }
    }
    return 0;
}