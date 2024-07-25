#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n, m;
    cin >> n >> m;
    int a[n], b[m];
    set<int> se;
    set<int> intersection;
    for (int i = 0; i < n; i++){
        cin >> a[i];
        se.insert(a[i]);
    }
    for (int i = 0; i < m; i++){
        cin >> b[i];
        if (se.find(b[i]) != se.end()) intersection.insert(b[i]);
    }
    for (int i = 0; i < m; i++){
        se.insert(b[i]);
    }
    for (auto i : se) if (intersection.find(i) == intersection.end()) cout << i << " ";
    return 0;
}