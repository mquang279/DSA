#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n, m, tmp;
    set<int> se;
    cin >> n >> m;
    for (int i = 0; i < n; i++){
        cin >> tmp;
        se.insert(tmp);
    }
    for (int i = 0; i < m; i++){
        cin >> tmp;
        se.insert(tmp);
    }
    for (auto it = se.rbegin(); it != se.rend(); it++) cout << *it << " ";
    return 0;
}