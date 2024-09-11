#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int n, m;
ll res;
int a[200][200];
ll b[200][200];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    cin >> n >> m;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= m; j++){
            cin >> a[i][j];
        }
    }
    b[1][1] = 1;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= m; j++){
            if (a[i - 1][j] == 1) b[i][j] += b[i - 1][j];
            if (a[i][j - 1] == 1) b[i][j] += b[i][j - 1];
        }
    }
    cout << b[n][m];
    return 0;
}
