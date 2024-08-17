#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    string s;
    cin >> s;
    unordered_set<char> se1;
    for (char x : s){
        se1.insert(x);
    }
    unordered_set<char> se2;
    unordered_map<char, int> mp;
    int left = 0, right = 0, res = s.length();
    while (right < s.length()){
        se2.insert(s[right]);
        mp[s[right]]++;
        if (se2.size() == se1.size()){
            while ((mp[s[left]] - 1) != 0){
                mp[s[left]]--;
                left++;
            }
            res = min(res, right - left + 1);
        }
        right++;
    }
    cout << res;
    return 0;
}