#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n, x;
    cin >> n >> x;
    int a[n];
    for (int &i : a) cin >> i;
    for (int i = 0; i < n; i++){
        if (a[i] == x){
            cout << i + 1 << " ";
            break;
        }
        if (i == n - 1){
            cout << -1 << " " << -1;
            return 0;
        }
    }
    for (int i = n - 1; i >= 0; i--){
        if (a[i] == x){
            cout << i + 1 << " ";
            break;
        }
    }
    return 0;
}