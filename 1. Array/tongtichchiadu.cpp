#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin >> n;
    ll tmp, tong = 0, tich = 1, mod = 1e9 + 7;
    for (int i = 0; i < n; i++){
        cin >> tmp;
        tong = ((tong % mod) + (tmp % mod)) % mod;
        tich = ((tich % mod) * (tmp % mod)) % mod;
    }
    cout << tong << endl << tich;
    return 0;
}