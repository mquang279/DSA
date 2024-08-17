#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin >> n;
    int a[n][n];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }
    map<int, int> mp;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (mp[a[i][j]] == i) mp[a[i][j]]++;
        }
    }
    bool check = true;
    for (auto it : mp){
        if (it.second == n){
            cout << it.first << " ";
            check = false;
        }
    }
    if (check) cout << "NOT FOUND";
    return 0;
}