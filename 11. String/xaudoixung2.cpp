#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin >> t;
    while (t--){
        string s;
        cin >> s;
        unordered_map<char, int> mp;
        int cnt_odd, cnt_even;
        cnt_odd = cnt_even = 0;
        for (char x : s){
            mp[x]++;
        }
        for (auto it : mp){
            if (it.second % 2 == 0) cnt_even++;
            else cnt_odd++;
        }
        if (cnt_odd == 0 || cnt_odd == 1) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}