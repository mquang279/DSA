#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll a[500][500];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= m; j++){
            cin >> a[i][j];
        }
    }
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= m; j++){
            a[i][j] += max(a[i - 1][j], a[i][j - 1]);
        }
    }
    cout << a[n][m];
    return 0;
}