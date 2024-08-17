#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    map<string, int> mp;
    for (int i = 0; i < 10; i++){
        string name;
        int weight;
        cin >> name >> weight;
        mp[name] = weight;
    }
    int n;
    cin >> n;
    while (n--){
        string s;
        cin >> s;
        string name = "";
        ll cnt = 0, res = 0;
        for (int i = 0; i < s.length(); i++){
            if (isalpha(s[i])){
                name += s[i];
            }
            else{
                cnt = cnt * 10 + (s[i] - '0');
                if (i == s.length() - 1 || isalpha(s[i + 1])){
                    res += cnt * mp[name];
                    cnt = 0;
                    name = "";
                }
            }
        }
        cout << res << endl;
    }
    return 0;
}