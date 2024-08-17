#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n, m;
    cin >> n >> m;
    int a[n][m];
    int colContain28[n] = {0}, rowContain28[m] = {0};
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> a[i][j];
            if (a[i][j] == 28){
                colContain28[i] = 1;
                rowContain28[j] = 1;
            }
        }
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if (colContain28[i] || rowContain28[j]) cout << 28 << " ";
            else cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}