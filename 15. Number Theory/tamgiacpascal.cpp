#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const ll MOD = 1e9 + 7;

ll a[1000][1000];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        for (int j = 0; j <= i; j++){
            if (j == 0 || j == i) a[i][j] = 1;
            else a[i][j] = ((a[i - 1][j] % MOD) + (a[i - 1][j - 1] % MOD)) % MOD;
        }
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j <= i; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}