#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n, m;
    cin >> n >> m;
    int a[n], tmp;
    map<int, int> mp;
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    for (int i = 0; i < m; i++){
        cin >> tmp;
        mp[tmp]++;
    }
    for (int i : a){
        cout << mp[i] << " ";
    }
    return 0;
}