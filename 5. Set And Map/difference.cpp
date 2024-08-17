#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n, m, tmp;
    cin >> n >> m;
    set<int> se;
    for (int i = 0; i < n; i++){
        cin >> tmp;
        se.insert(tmp);
    }
    for (int i = 0; i < m; i++){
        cin >> tmp;
        if (se.find(tmp) != se.end()) se.erase(tmp);
    }
    for (auto x : se) cout << x << " ";
    return 0;
}