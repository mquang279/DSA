#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n, m;
    unordered_set<int> se;
    cin >> n >> m;
    int a[n], tmp;
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    for (int i = 0; i < m; i++){
        cin >> tmp;
        se.insert(tmp);
    }
    for (int i = 0; i < n; i++){
        if (se.find(a[i]) != se.end()) cout << "28tech ";
        else cout << "29tech ";
    }
    return 0;
}