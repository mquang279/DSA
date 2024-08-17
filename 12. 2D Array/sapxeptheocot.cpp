#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin >> n;
    int a[n][n];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> a[j][i];
        }
    }
    for (int i = 0; i < n; i++){
        sort(a[i], a[i] + n);
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cout << a[j][i] << " ";
        }
        cout << endl;
    }
    return 0;
}