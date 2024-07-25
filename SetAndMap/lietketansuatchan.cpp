#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    map<int, int> mp;
    int n, tmp;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> tmp;
        mp[tmp]++;
    }
    for (auto it : mp){
        if (it.second % 2 == 0) cout << it.first << " " << it.second << endl;
    }
    cout << endl;
    for (auto it = mp.rbegin(); it != mp.rend(); it++){
        if (it->second % 2 == 0) cout << it->first << " " << it->second << endl;
    }
    return 0;
}