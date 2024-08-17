#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n, m, tmp;
    cin >> n >> m;
    ll sumRow[n] = {0};
    ll sumCol[m] = {0};
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> tmp;
            sumRow[i] += 1ll * tmp;
            sumCol[j] += 1ll * tmp;
        }
    }
    for (ll x : sumRow) cout << x << " ";
    cout << endl;
    for (ll x : sumCol) cout << x << " ";
    return 0;
}