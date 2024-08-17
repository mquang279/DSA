#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin >> n;
    int a[200][200] = {0};
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            cin >> a[j][i];
        }
    }
    for (int i = 2; i <= n; i++){
        for (int j = 1; j <= n; j++){
            a[i][j] += max({a[i - 1][j - 1], a[i - 1][j], a[i - 1][j + 1]});
        }
    }
    cout << *max_element(a[n] + 1, a[n] + n + 1);
    return 0;
}