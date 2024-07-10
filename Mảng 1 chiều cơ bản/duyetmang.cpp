#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
        cout << a[i] << " ";
    }
    cout << endl;
    for (int i = n - 1; i >= 0; i--){
        cout << a[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < n; i++){
        if (i % 2 == 0) cout << a[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < n; i++){
        if (i % 2 != 0) cout << a[i] << " ";
    }
    cout << endl;
    for (int i = 1; i < n; i++){
        cout << a[i] + a[i - 1] << " ";
    }
    return 0;
}