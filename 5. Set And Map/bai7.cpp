#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n, tmp;
    cin >> n;
    map<int, int> mp;
    for (int i = 0; i < n; i++){
        cin >> tmp;
        mp[tmp]++;
    }
    for (auto i : mp){
        cout << i.first << " " << i.second << endl;
    }
    return 0;
}