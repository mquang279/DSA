#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin >> n;
    map<int, set<vector<int>>> mp;
    while (n--){
        int m;
        cin >> m;
        vector<int> v;
        int tmp;
        for (int i = 0; i < m; i++){
            cin >> tmp;
            v.push_back(tmp);
        }
        mp[m].insert(v);
    }
    int cnt = 0;
    for (auto it : mp){
        cnt += it.second.size();
    }
    cout << cnt;
    return 0;
}