#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin >> n;
    int a[n], b[n - 1];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    for (int i = 0; i < n - 1; i++){
        cin >> b[i];
    }
    int res = a[0];
    for (int i = 1; i < n; i++){
        if (b[i - 1] == 1){
            res += a[i]; 
        }
        else res -= a[i];
    }
    cout << res;
    return 0;
}