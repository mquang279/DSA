#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin >> n;
    int a[n];
    for (int &x : a) cin >> x;
    ll res = 0;
    sort(a, a + n);
    for (int i = 0; i < n; i++){
        if (a[i] > (res + 1)){
            cout << res + 1;
            return 0;
        }
        else{
            res += 1ll * a[i];
        }
    }
    cout << res + 1;
    return 0;
}