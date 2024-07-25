#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin >> t;
    string name;
    map<string, int> mp;
    while (t--){
        cin >> name;
        mp[name]++;
    }
    int min_val = INT_MAX, max_val = INT_MIN;
    for (auto it : mp){
        cout << it.first << " " << it.second << endl;
        min_val = min(min_val, it.second);
        max_val = max(max_val, it.second);
    }
    cout << endl;
    for (auto it : mp){
        if (it.second == min_val){
            cout << it.first << " " << it.second << endl;
            break;
        }
    }
    for (auto it : mp){
        if (it.second == max_val){
            cout << it.first << " " << it.second << endl;
            break;
        }
    }
    return 0;
}