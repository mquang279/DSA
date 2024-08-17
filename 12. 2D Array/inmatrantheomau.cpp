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
            cin >> a[i][j];
        }
    }

    //Pattern 1
    cout << "Pattern 1:" << endl;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cout << a[j][i] << " ";
        }
        cout << endl;
    }

    //Pattern 2
    cout << "Pattern 2:" << endl;
    for (int i = n - 1; i >= 0; i--){
        for (int j = n - 1; j >= 0; j--){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    //Pattern 3
    cout << "Pattern 3:" << endl;
    for (int i = n - 1; i >= 0; i--){
        for (int j = 0; j < n; j++){
            cout << a[j][i] << " ";
        }
        cout << endl;
    }

    //Pattern 4
    cout << "Pattern 4:" << endl;
    for (int i = 0; i < n; i++){
        for (int j = n - 1; j >= 0; j--){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}