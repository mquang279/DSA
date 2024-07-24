#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin >> n;
    int tmp;
    map<int, int> mp;
    for (int i = 0; i < n; i++){
        cin >> tmp;
        mp[tmp]++;
    }
    for (auto it : mp){
        cout << it.first << " " << it.second << endl;
    }
    return 0;
}