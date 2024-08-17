#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n, m, tmp;
    cin >> n >> m;
    map<int, int> mp;
    for (int i = 0; i < n; i++){
        cin >> tmp;
        if (mp.find(tmp) == mp.end()) mp[tmp] = 1;
    }
    for (int i = 0; i < m; i++){
        cin >> tmp;
        if (mp[tmp] == 1) mp[tmp]++;
    }
    for (auto it : mp){
        if (it.second == 2) cout << it.first << " ";
    }
    cout << endl;
    for (auto it : mp) cout << it.first << " ";
    return 0;
}