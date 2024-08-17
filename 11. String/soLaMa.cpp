#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin >> t;
    unordered_map<string, int> mp;
    mp["I"] = 1;
    mp["V"] = 5;
    mp["X"] = 10;
    mp["L"] = 50;
    mp["C"] = 100;
    mp["D"] = 500;
    mp["M"] = 1000;
    mp["IV"] = 4;
    mp["IX"] = 9;
    mp["XL"] = 40;
    mp["XC"] = 90;
    mp["CD"] = 400;
    mp["CM"] = 900;
    while (t--){
        string s;
        cin >> s;
        int i = 0;
        ll res = 0;
        while (i < s.length()){
            string tmp = "";
            tmp += s[i];
            if (i != s.length() - 1 && mp.find(tmp + s[i + 1]) != mp.end()){
                res += mp[tmp + s[i + 1]];
                i += 2;
            }
            else{
                res += mp[tmp];
                i++;
            }
        }
        cout << res << endl;
    }
    return 0;
}