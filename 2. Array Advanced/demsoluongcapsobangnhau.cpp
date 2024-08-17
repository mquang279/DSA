#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n, tmp;
    cin >> n;
    map<int, int> mp;
    ll res = 0;
    for (int i = 0; i < n; i++){
        cin >> tmp;
        mp[tmp]++;
    }
    for (auto it : mp){
        res += 1ll * it.second * (it.second - 1) / 2;
    }
    cout << res;
    return 0;
}