#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll mod = 1e9 + 7;

ll factorial(int start, int end){
    ll res = 1;
    for (int i = start; i <= end; i++){
        res = ((res % mod) * (i % mod)) % mod;
    }
    return res;
}

void solve(int n, int k){
    cout << factorial(1, n) / ((factorial(1, k) * factorial(1, n - k)) % mod) << endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin >> t;
    while (t--){
        int n, k;
        cin >> n >> k;
        solve(n, k);
    }
    return 0;
}