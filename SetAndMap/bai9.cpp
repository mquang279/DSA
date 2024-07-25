#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin >> n;
    map<pair<int, int>, int> mp;
    int x, y;
    for (int i = 0; i < n; i++){
        cin >> x >> y;
        mp[{x, y}]++;
    }
    for (auto it : mp){
        cout << it.first.first << " " << it.first.second << " " << it.second << endl;
    }
    return 0;
}