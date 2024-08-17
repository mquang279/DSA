#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n, m;
    cin >> n >> m;
    char a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    unordered_map<char, int> mp;
    char tmp;
    for (int i = 0; i < m; i++){
        cin >> tmp;
        mp[tmp] = 1;
    }
    for (int i = 0; i < n; i++){
        if (mp[a[i]] != 0){
            cout << a[i] << " ";
            mp[a[i]] = 0;
        }
    }
    return 0;
}