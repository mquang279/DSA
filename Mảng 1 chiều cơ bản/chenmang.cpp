#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n, m, p;
    cin >> n >> m >> p;
    int a[n + m], b[m];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    for (int i = 0; i < m; i++){
        cin >> b[i];
    }
    for (int i = 0; i < n; i++){
        if (i == p){
            for (int j = 0; j < m; j++){
                cout << b[j] << " ";
            }
        }
        cout << a[i] << " ";
    }
    if (p == n){
        for (int i = 0; i < m; i++){
            cout << b[i] << " ";
        }
    }
    return 0;
}
