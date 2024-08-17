#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n, tmp;
    cin >> n;
    map<int, int> mp;
    int max_val = INT_MIN;
    for (int i = 0; i < n; i++){
        cin >> tmp;
        mp[tmp]++;
        max_val = max(max_val, mp[tmp]);
    }
    for (auto it = mp.begin(); it != mp.end(); it++){
        if (it->second == max_val){
            cout << it->first << " " << it->second;
            break;
        }
    }
    return 0;
}